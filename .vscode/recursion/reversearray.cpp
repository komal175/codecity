#include<bits/stdc++.h>
using namespace std;
void f(int l,int r,vector<int>& a){
    if(l>=r) return ;
    swap(a[l],a[r]);
    f(l+1,r-1,a);
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    f(0,n-1,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}