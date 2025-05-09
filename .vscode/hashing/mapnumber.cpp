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
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    //for iteration
    for(auto it:mpp){
        cout<<it.first<<"-->"<<it.second<<"\n";
    }
    cout<<"\n";
    //fetch
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        cout<<num<<"-->"<<mpp[num]<<"\n";
    } 
}