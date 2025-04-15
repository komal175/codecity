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
    cout<<endl;
    //precompute
    int hash[7]={0};
    for(int i=0;i<7;i++){
        cout<<hash[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        hash[a[i]]+=1;
    }
    for(int i=0;i<7;i++){
        cout<<hash[i]<<" ";
    }
    cout<<endl;
    //fetch
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        cout<<num<<"--"<<hash[num]<<"\n";
    }
}