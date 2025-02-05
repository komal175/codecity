#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int k = 0; k < t; k++) {
        int n;
        cin >> n;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                cout << "*";
                if(j < i) cout << " ";  // To avoid extra space after the last star
            }
            cout << endl;
        }
        if(k < t - 1) cout << endl;  // Adding a newline between test cases (optional)
    } 
}
