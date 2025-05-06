#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        bool leader =true;
        for(int j=i+1;j<n;j++){
            if(nums[j]>nums[i]){
              leader =false;
              break;  
            }
        }
        if(leader ==true){
            ans.push_back(nums[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}