#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<char> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
        cout<<s[i]<<" ";
    }
    //precompute for lower case
    int hash[27]={0};
    for(int i =0;i<27;i++){
        cout<<hash[i];
    }
    for(int i=0;i<n;i++){
        hash[s[i]-'a']+=1;
    }
    cout<<endl;
    for(int i =0;i<27;i++){
        cout<<hash[i];
    }
    cout<<"\n";
    //fetching
    int t;
    cin>>t;
    while(t--){
        char ch;
        cin>>ch;
        cout<<ch<<"-->"<<hash[ch -'a']<<"\n";
    }
}