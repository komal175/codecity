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
    //remove duplicates
    int i=0;
    for(int j=1;j<n;j++){
        if(a[i]!=a[j]){
            a[i+1]=a[j];
            i++;
        }
    }
    cout<<endl<<i+1<<"\n";
    for(int j=0;j<i+1;j++){
        cout<<a[j]<<" ";
    }
}