#include<bits/stdc++.h>
using namespace std;
string twosum(int n,vector<int> &nums,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=nums[i]+nums[j];
            if(sum==target){
                return "yes";
            }
        }
    }
    return "no";
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    cout<<twosum(n,nums,target);
}