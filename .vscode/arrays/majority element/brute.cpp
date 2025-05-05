#include<bits/stdc++.h>
using namespace std;
int majorityel(int n,vector<int> &nums){
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                cnt++;
            }
        }
        if(cnt>n/2){
            return nums[i];
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<majorityel(n,nums);
}