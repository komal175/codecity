#include<bits/stdc++.h>
using namespace std;

void f(int l, int r, vector<int>& a) {
    if (l >= r) return;
    swap(a[l], a[r]);
    f(l + 1, r - 1, a); // Recursively reverse the array
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n); // Using vector for dynamic array

    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Input the array elements
    }

    // Print the original array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; // Print elements with space separation
    }
    cout << endl;

    f(0, n - 1, a); // Call the recursive function to reverse the array

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; // Print elements with space separation
    }
    cout << endl;

    return 0;
}
