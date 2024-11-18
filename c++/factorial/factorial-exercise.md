# Building a Large Number Factorial Calculator

## Part 1: Basic Factorial with Simple Numbers
**Goal**: Create a simple factorial calculator that works with small numbers.
**Concepts**: Basic loops, multiplication, function creation

**Tasks**:
1. Create a function that calculates factorial for numbers 0-10
2. Handle basic error cases (negative numbers)
3. Test with small numbers

**Example starter code**:
```cpp
#include <iostream>
using namespace std;

unsigned long calculateSmallFactorial(int n) {
    // Your code here
}

// Test with numbers 0-10
```

**Expected Output**:
```
5! = 120
10! = 3628800
```

## Part 2: Vector Basics
**Goal**: Learn to use vectors for storing digits
**Concepts**: Vectors, digit manipulation

**Tasks**:
1. Create a vector and store a number digit by digit
2. Create a function to display the vector contents
3. Create a function to convert vector back to string

**Example starter code**:
```cpp
#include <vector>
#include <string>

vector<int> numberToVector(int num) {
    // Your code here
}

string vectorToString(const vector<int>& vec) {
    // Your code here
}
```

## Part 3: Single Digit Multiplication
**Goal**: Multiply a vector of digits by a single number
**Concepts**: Carry handling, vector modification

**Tasks**:
1. Create a function that multiplies a vector by a single digit
2. Handle carry properly
3. Test with various cases

**Example starter code**:
```cpp
void multiplyWithNumber(vector<int>& digits, int num) {
    // Your code here: Remember to handle carry!
}

// Test cases:
// [1,2,3] × 2 = [2,4,6]
// [1,2,3] × 5 = [6,1,5]
```

## Part 4: Complete Factorial Calculator
**Goal**: Combine all parts to create the final calculator
**Concepts**: Integration of components

**Tasks**:
1. Create the main factorial function using previous components
2. Add proper error handling
3. Create a user interface
4. Test with larger numbers

**Challenge Extensions**:
1. Add comma formatting (e.g., 1,234,567)
2. Calculate execution time
3. Add memory usage tracking
4. Handle invalid input

## Testing Guide

### Test Case 1: Basic Numbers
- Input: 5
- Expected: 120

### Test Case 2: Edge Cases
- Input: 0
- Expected: 1
- Input: 1
- Expected: 1
- Input: -1
- Expected: Error message

### Test Case 3: Larger Numbers
- Input: 20
- Input: 50
- Input: 100

## Common Pitfalls to Watch For:
1. Forgetting to handle carry in multiplication
2. Vector order (reverse vs forward)
3. Not handling zero properly
4. Memory management with large numbers

## Debugging Tips:
1. Print vector contents after each operation
2. Use small numbers first
3. Compare results with a calculator
4. Add debug print statements for carry handling

## Development Steps:

### Step 1: Basic Structure
```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Your function declarations here
```

### Step 2: Vector Operations
```cpp
// Test your vector operations separately
vector<int> testVector = {1, 2, 3};
// Try different operations
```

### Step 3: Multiplication
```cpp
// Test multiplication with small numbers first
// Then gradually increase complexity
```

### Step 4: Integration
```cpp
int main() {
    // Combine all components
    return 0;
}
```

## Final Review Questions:
1. How does your program handle very large numbers?
2. What happens at each step of the multiplication?
3. How efficient is your solution?
4. What improvements could be made?
