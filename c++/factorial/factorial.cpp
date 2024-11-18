#include<iostream>
#include<vector>
#include<string>

using namespace std;

unsigned long calculateSmallFactorial(int n);
vector<int> numberToVector(int num);
void displayVector (const vector<int>& vec);
string vectorToString(const vector<int>& vec);
void multiplyWithNumber(std::vector<int>& digits, int num);

int main()
{
    // int n = 0;
    // unsigned long factorial;
    // do
    // {
    //     cout << "saisir un nombre entre 0 et 10" << endl;
    //     cin >> n;
    // } while (n < 0 || n > 10);
    
    // factorial = calculateSmallFactorial(n);
    // cout << n << "! = " << factorial << endl;
    
    int number = 13343 ;
    vector<int> numberVect = numberToVector(number);
    displayVector(numberVect);
    string stringVector = vectorToString(numberVect);
    cout << "string : "<< stringVector<< endl;
}

unsigned long calculateSmallFactorial(int n) {
    unsigned long resultat = 1;

    for (int i = 1; i <= n ; i++)
    {
        resultat = resultat * i;
    }
    
    return resultat;
}

vector<int> numberToVector(int num) {
    vector<int> digits;
    int digit = 0;

    while (num > 0) {
        // Get the last digit
        digit = num % 10;
        digits.push_back(digit);

        // Remove the last digit
        num /= 10;
    }

    return digits;
}

void displayVector (const vector<int>& vec){
    for (int digit : vec)
    {
        cout << digit << " " ;
    }
    cout << endl ;
}
// Using a const vector<int>& vec parameter to avoid copying the vector.
string vectorToString(const vector<int>& vec) {
    string stringNumber;
    for (int i = vec.size() - 1; i >= 0; i--){
        stringNumber += to_string(vec[i]);
    }

    return stringNumber;
}

void multiplyWithNumber(std::vector<int>& digits, int num) {
    int carry = 0;

    // Iterate through the vector of digits
    for (size_t i = 0; i < digits.size(); i++) {
        // Multiply the current digit by the number
        int product = digits[i] * num + carry;

        // Store the last digit of the product
        digits[i] = product % 10;

        // Calculate the carry
        carry = product / 10;
    }

    // If there's any remaining carry, append it to the end
    while (carry > 0) {
        digits.push_back(carry % 10);
        carry /= 10;
    }
}