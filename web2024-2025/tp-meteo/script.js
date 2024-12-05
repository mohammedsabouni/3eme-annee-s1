
const topDeg = document.querySelector("#topDeg");
const feels = document.querySelector("#feels");
const date = document.querySelector("#date");


const apiKey = config.apiKey;
const apiUrl = "https://api.openweathermap.org/data/2.5/weather?lat=";
const lat = 34.677874
const lon = -1.929306

const getWeather = async () => {    
    try {
        const response = await fetch(apiUrl + lat + "&lon=" + lon + "&appid=" + apiKey);
        const data = await response.json();
        console.log(data);
    } catch (error) {
        console.log(error);
    }
}

getWeather();


