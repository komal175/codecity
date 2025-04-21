#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    int largest=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    int slargest=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>slargest && a[i]!=largest){
            slargest=a[i];
        }
    }
    cout<<"the second largest number is: "<<slargest;
}