#include<bits/stdc++.h>
using namespace std;
string twosum(int n,vector<int> &nums,int target){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        int a =nums[i];
        int more=target-a;
        if(mpp.find(more) != mpp.end()){
            return "yes";
        }
        mpp[a]=i;
    }
    return "no";
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    cout<<twosum(n,nums,target);
}