#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    cin>>n>>num;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int cnt =0;
    for(int i =0;i<n;i++){
        if(a[i]==num){
            cnt++;
        }
    }
    cout<<cnt;
}