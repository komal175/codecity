#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int start,n;
        cin>>start>>n;
        vector<long long int> prime(n+1,1);
        prime[0]=prime[1]=0;
        long long int cnt=0;
        for(long long int i=2;i<10;i++){
            if(prime[i]==1){
                for(long long int j=i*i;j<=n;j+=i){
                    prime[j]=0;
                }
            }
        }
        for(long long int i=start;i<=n;i++){
            if(prime[i]==1) cnt++;
        }
        cout<<cnt<<"\n";
    }
}