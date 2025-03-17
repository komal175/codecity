#include<bits/stdc++.h>
using namespace std;
void func(vector<int>&a,int n){
    for(int i=0;i<=n-2;i++){
        int min =i;
        for(int j=i+1;j<=n-1;j++){
            if(a[j]<a[min]){
                min =j;
            }
        }
        int temp = a[min];
        a[min] =a[i];
        a[i] = temp;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
        for(int i =0;i<n;i++){
            cout<<a[i]<<" ";
        }
        func(a,n);
        for(int i =0;i<n;i++){
            cout<<a[i]<<" ";
        }
}