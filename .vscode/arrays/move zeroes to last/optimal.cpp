#include<bits/stdc++.h>
using namespace std;
int movezeroes(int n,vector<int> &a){
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[j]=a[i];
            j++;
        }
    }
    for(int i=j;i<n;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
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
    movezeroes(n,a);
}