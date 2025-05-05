#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int buy=prices[0];
    int profit =0;
    for(int i=1;i<n;i++){
        int cost=prices[i]-buy;
        profit=max(profit,cost);
        buy=min(buy,prices[i]);
    }
    cout<<profit;
}