#include<bits/stdc++.h>
using namespace std;
void f(int i,vector<int>& a,int n){
    if(i>=n/2) return;
    swap(a[i],a[n-i-1]);
    f(i+1,a,n);
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    cout<<"\n";
    f(0,a,n);
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
}