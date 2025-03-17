#include<bits/stdc++.h>
using namespace std;
void func(vector<int>&a,int n){
    for(int i=0;i<n-1;i++){
        int min =i;
        for(int j=i+1;j<n-1;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        int temp = a[i];
            a[i] =a[min];
            a[min] = temp;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        func(a,n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
}