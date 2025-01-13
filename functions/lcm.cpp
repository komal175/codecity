#include <iostream>
using namespace std;

// Function to calculate GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM (Least Common Multiple)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    
    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    // Calculate LCM
    int result = lcm(num1, num2);
    
    // Output the result
    cout << "LCM of " << num1 << " and " << num2 << " is: " << result << endl;
    
    return 0;
}

    
