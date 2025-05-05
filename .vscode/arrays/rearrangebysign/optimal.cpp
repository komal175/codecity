#include<bits/stdc++.h>//equal negative and positive numbers
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    int ans[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int posindex=0,negindex=1;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            ans[posindex]=nums[i];
            posindex +=2;
        }
        else{
            ans[negindex]=nums[i];
            negindex +=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}