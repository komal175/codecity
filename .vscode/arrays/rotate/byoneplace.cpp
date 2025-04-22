#include<bits/stdc++.h>
using namespace std;
int rotate(int n,vector<int> &a){
    int temp=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    rotate(n,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}