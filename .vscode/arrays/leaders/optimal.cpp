#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int largest=INT_MIN;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(nums[i]>largest){
            ans.push_back(nums[i]);
        }
        largest=max(largest,nums[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}