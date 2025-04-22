#include<bits/stdc++.h>
using namespace std;
void rotatedplaces(int n,int d,vector<int> &a ){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=a[i];
    }
    for(int i=0;i<n-d;i++){
        a[i]=a[i+d];
    }
    for(int i=n-d;i<n;i++){
        a[i]=temp[i-(n-d)];
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
    int d;
    cin>>d;
    d=d%n;
    rotatedplaces(n,d,a);
}
