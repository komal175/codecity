#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n =s.size();
    string reverse;
    for(int i=n-1;i>=0;--i){
        reverse.push_back(s[i]);
    }
    cout<<reverse<<endl;
    if(s==reverse){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }
