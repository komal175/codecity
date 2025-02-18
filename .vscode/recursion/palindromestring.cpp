#include<bits/stdc++.h>
using namespace std;
int i;
int f(int i,string &s){
    int n = s.size();
    if(i>=n/2) return true;
    if(s[i]!=s[n-1-i]) return false;
    f(i+1,s);
}
int main(){
    string s;
    cin>>s;
    if(f(0,s)) cout<<"yes";
    else cout<<"no";
}