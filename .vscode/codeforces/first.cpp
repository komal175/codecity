#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x;
    while(t--){
        cin>>x;
        int k=INT_MAX;
        int p;
        while(x>0){
            p=x%10;
            if(p<k){
                k=p;
            }
            x=x/10;
        }
        cout<<k<<"\n";
    }
}