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
    int j=0;
    for(int i=1;i<n;i++){
        if(a[i]!=a[j]){
            a[j+1]=a[i];
            j++;
        }
    }
    cout<<endl;
    for(int i=0;i<j+1;i++){
        cout<<a[i]<<" ";
    }
}