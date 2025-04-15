#include<bits/stdc++.h>
using namespace std;
f(vector<char> &s,int n,char ch){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]==ch) cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<char> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
        cout<<s[i]<<" ";
    }
    cout<<"\n";
    int t;
    cin>>t;
    while(t--){
        char ch;
        cin>>ch;
        cout<<ch<<"-"<<f(s,n,ch)<<"\n";
    }
}