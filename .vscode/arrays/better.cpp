#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    for(int i=0;i<n+1;i++){
        if(hash[i]==0){
            cout<<i;
            break;
        }
    }
}