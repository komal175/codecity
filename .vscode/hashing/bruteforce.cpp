#include<bits/stdc++.h>
using namespace std;
int f(int n,vector<int> &a,int num){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==num){
            cnt = cnt+1;
        }
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n); 
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        cout<<num<<":"<<f(n,a,num)<<endl;
    }
}
