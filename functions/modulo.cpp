#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int M = 47;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        long long int fact =1;
        for(long long int i=1;i<=n;i++){
            fact = (fact*i)%M;
        }
        cout<<fact;
    }
}