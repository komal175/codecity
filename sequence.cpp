#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
    int n;
    cin >>n;
    int a[n];
    for(int i =0;i<n;++i){
    cin >> a[n];
    }
    int r = 1;
    for(int i =0;i<n;++i){
        r = r*1;
    }
    if(r%2==0 || r%3==0 || r%5==0){
        cout <<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}