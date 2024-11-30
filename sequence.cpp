#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
    int n;
    cin >>n;
    long long int a[n];
    for(int i =0;i<n;++i){
    cin >> a[i];
    }
    long long int r = 1;
    for(int i =0;i<n;++i){
        r = r*a[i];
    }
    if(r%10==2 || r%10==3 || r%10==5){
        cout <<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
