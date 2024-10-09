#include <iostream>
using namespace std;

int main() {
    int n;
    while (true) {
        cout << "Enter a number (-1 to exit): ";
        cin >> n;

        if (n == -1) {
            break;  // Exit the loop if the user inputs -1
        }

        if (n == 76) {
            continue;  // Skip the number 76
        }

        cout << n << endl;  // Print the number
    }
    return 0;
}
