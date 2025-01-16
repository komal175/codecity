#include <bits/stdc++.h>
using namespace std;

int main() {
    string type; // Use 'type' as a variable name to avoid conflict with the 'string' class
    cin >> type; // Get input as a string
    
    if (type == "character") {
        cout << "1";
    } else if (type == "integer") {
        cout << "4";
    } else if (type == "float") {
        cout << "4";
    } else if (type == "double") {
        cout << "8";
    } else {
        cout << "Unknown type";
    }
    
    return 0;
}

