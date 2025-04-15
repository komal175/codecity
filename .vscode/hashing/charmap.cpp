#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //precompute
    map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    //for iteration
    for(auto it:mpp){
        cout<<it.first<<"-->"<<it.second<<"\n";
    }
    //fetch
    int t;
    cin>>t;
    while(t--){
        char ch;
        cin>>ch;
        cout<<ch<<" appears "<<mpp[ch]<<" times "<<"\n";
    }
}