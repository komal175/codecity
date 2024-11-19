#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    long long int prod = 1;
    for(int i =0;i<n;++i){
        prod = (prod*a[i])%m;
    }
    cout << prod;
}
