#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int xor2 =0;
    int xor1=0;
    for(int i=0;i<=n;i++){
        xor1=xor1^i;
    }
    for(int j=0;j<n;j++){
        xor2=xor2^nums[j];
    }
    int ans=xor1 ^ xor2;
    cout<<ans;
}