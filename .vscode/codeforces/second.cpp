#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt=0;
        int add=0;
        for(int j=0;j<n;j++){
            if(cnt==k){
                cnt=0;
                continue;
            }
            else if(a[j]==0){
                cnt++;
                if(cnt==k) add++;
            }
            else if(a[j]==1) cnt=0;
        }
        cout<<add<<"\n";
    }
}