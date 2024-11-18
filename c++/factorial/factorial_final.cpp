#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to multiply a very large number (stored in a vector) with a single digit
void multiply_with_number(vector<int>& result, int num) {
    int carry = 0;
    
    // Multiply each digit and store carry
    for(int i = 0; i < result.size(); i++) {
        int product = result[i] * num + carry;
        result[i] = product % 10;    // Keep the last digit
        carry = product / 10;        // Keep the remaining digits as carry
    }
    
    // If there's any carry left, add it as new digits
    while(carry > 0) {
        result.push_back(carry % 10);
        carry = carry / 10;
    }
}

// Function to calculate factorial
string calculate_factorial(int n) {
    // Handle special cases
    if(n < 0) {
        return "Error: Negative number";
    }
    if(n == 0 || n == 1) {
        return "1";
    }
    
    // Initialize result vector with 1
    vector<int> result = {1};
    
    // Calculate factorial
    for(int i = 2; i <= n; i++) {
        multiply_with_number(result, i);
    }
    
    // Convert result to string (in reverse, since we stored digits backwards)
    string factorial_result;
    for(int i = result.size() - 1; i >= 0; i--) {
        factorial_result += to_string(result[i]);
    }
    
    return factorial_result;
}

int main() {
    int number;
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;
    
    string result = calculate_factorial(number);
    cout << number << "! = " << result << endl;
    
    return 0;
}