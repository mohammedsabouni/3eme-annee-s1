// Constants for Oujda coordinates
const LATITUDE = 34.68;
const LONGITUDE = 1.91;

// API URL
const API_URL = `https://api.open-meteo.com/v1/forecast?latitude=${LATITUDE}&longitude=${LONGITUDE}&hourly=temperature_2m,precipitation_probability&daily=temperature_2m_max,temperature_2m_min,sunrise,sunset,precipitation_probability_max&timezone=auto&current_weather=true`;

// Elements
const topDegElement = document.getElementById('topDeg');
const feelsElement = document.getElementById('feels');
const dateElement = document.getElementById('date');
const hourlyList = document.querySelector('.hourly ul');
const mainList = document.querySelector('.main ul');
const sunriseElement = document.querySelector('.sunrise span:nth-child(2)');
const sunsetElement = document.querySelector('.sunset span:nth-child(2)');

// Function to format time (convert from 24h to 12h format)
function formatTime(timeString) {
    const [hours, minutes] = timeString.split(':');
    const hour = parseInt(hours);
    const ampm = hour >= 12 ? 'PM' : 'AM';
    const formattedHour = hour % 12 || 12;
    return `${formattedHour}:${minutes} ${ampm}`;
}

// Function to format date
function formatDate(date) {
    const days = ['Sun', 'Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat'];
    return `${days[date.getDay()]}, ${formatTime(date.toTimeString().slice(0, 5))}`;
}

// Function to get weather icon based on time and precipitation
function getWeatherIcon(isDay, precipitation) {
    if (precipitation > 50) {
        return 'fa-cloud-rain';
    } else if (precipitation > 20) {
        return isDay ? 'fa-cloud-sun' : 'fa-cloud-moon';
    } else {
        return isDay ? 'fa-sun' : 'fa-moon';
    }
}

// Function to update hourly forecast
function updateHourlyForecast(hourlyData) {
    hourlyList.innerHTML = ''; // Clear existing items
    
    // Get next 24 hours of data (24 items)
    const currentHour = new Date().getHours();
    const next24Hours = hourlyData.time
        .slice(currentHour, currentHour + 24)
        .map((time, index) => ({
            time: time,
            temperature: hourlyData.temperature_2m[currentHour + index],
            precipitation: hourlyData.precipitation_probability[currentHour + index]
        }));

    // Create hourly forecast items
    next24Hours.forEach(hour => {
        const time = new Date(hour.time);
        const isDay = time.getHours() >= 6 && time.getHours() < 20;
        
        const li = document.createElement('li');
        li.innerHTML = `
            <div class="hour">${formatTime(time.toTimeString().slice(0, 5))}</div>
            <div class="hour-icon">
                <i class="fa-solid ${getWeatherIcon(isDay, hour.precipitation)}"></i>
            </div>
            <div class="hour-deg">${Math.round(hour.temperature)}°</div>
            <div class="precipitation">
                <i class="fa-solid fa-droplet"></i> 
                <span>${hour.precipitation} %</span>
            </div>
        `;
        hourlyList.appendChild(li);
    });
}

// Function to update daily forecast
function updateDailyForecast(dailyData) {
    mainList.innerHTML = ''; // Clear existing items
    
    const days = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'];
    
    dailyData.time.forEach((time, index) => {
        const date = new Date(time);
        const li = document.createElement('li');
        li.innerHTML = `
            <span class="day">${index === 0 ? 'Today' : days[date.getDay()]}</span>
            <div class="m-prep">
                <i class="fa-solid fa-droplet"></i>
                <span>${dailyData.precipitation_probability_max[index]} %</span>
            </div>
            <div class="m-icon">
                <i class="fa-solid fa-sun"></i>
                <i class="fa-solid fa-moon"></i>
            </div>
            <div class="m-deg">
                <span>${Math.round(dailyData.temperature_2m_max[index])}°</span>
                <span>${Math.round(dailyData.temperature_2m_min[index])}°</span>
            </div>
        `;
        mainList.appendChild(li);
    });
}

// Function to fetch weather data
async function fetchWeatherData() {
    try {
        const response = await fetch(API_URL);
        const data = await response.json();

        // Update current weather
        const currentTemp = Math.round(data.current_weather.temperature);
        topDegElement.textContent = `${currentTemp}°`;
        
        // Update feels like and temperature range
        const todayMax = Math.round(data.daily.temperature_2m_max[0]);
        const todayMin = Math.round(data.daily.temperature_2m_min[0]);
        feelsElement.textContent = `${todayMax}°/${todayMin}° Feels like ${currentTemp}°`;
        
        // Update date
        dateElement.textContent = formatDate(new Date());
        
        // Update sunrise/sunset
        const sunrise = new Date(data.daily.sunrise[0]);
        const sunset = new Date(data.daily.sunset[0]);
        sunriseElement.textContent = formatTime(sunrise.toTimeString().slice(0, 5));
        sunsetElement.textContent = formatTime(sunset.toTimeString().slice(0, 5));
        
        // Update hourly and daily forecasts
        updateHourlyForecast(data.hourly);
        updateDailyForecast(data.daily);
    } catch (error) {
        console.error('Error fetching weather data:', error);
    }
}

// Initial fetch
fetchWeatherData();

// Update weather data every 30 minutes
setInterval(fetchWeatherData, 30 * 60 * 1000);