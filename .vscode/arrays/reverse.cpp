#include<bits/stdc++.h>
using namespace std;
void f(vector<int> a,vector<int> &ans,int i,int n){
    if(i==n) return;
    f(a,ans,i+1,n);
    ans.push_back(a[i]);
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ans;
    f(a,ans,0,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}