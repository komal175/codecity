#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //precomputing
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]+=1;
    }
    //fetch
    int t;
    cin>>t;
    while(t--){
        char ch;
        cin>>ch;
        cout<<ch<<"-->"<<hash[ch]<<"\n";
    }
}