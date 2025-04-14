#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    //precompute
    int hash[13]={0};
    for(int i=0;i<13;i++){
        cout<<hash[i]<<" ";
    }
    for(int i=0;i<n;i++){
        hash[a[i]] +=1;
    }
    //fetching
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        cout<<"\n"<<hash[num];
    }
}