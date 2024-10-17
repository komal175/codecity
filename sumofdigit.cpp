#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum_of_digits = 0;

        while (n > 0) {
            sum_of_digits += n % 10;  // Add the last digit to the sum
            n /= 10;                   // Remove the last digit
        }

        cout << sum_of_digits << endl;  // Output the sum of digits
    }
    return 0;
}
