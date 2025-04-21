#include<bits/stdc++.h>
using namespace std;
int largestelement(int n,vector<int> &a){
    int largest =a[0];
    for(int i=0;i<n;i++){
        if(a[i]>largest) largest=a[i];
    }
    return largest;
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
    cout<<"largest element is : "<<largestelement(n,a);
}