#include<bits/stdc++.h>
using namespace std;
int f(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    int temp =a[n];
    for(int i=0;i<n/2;i++){
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    f();
}