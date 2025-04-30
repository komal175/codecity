#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums,int low,int high,int mid){
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
}
void mergesort(int low,int high,vector<int> &nums){
    int mid=(low+high)/2;
    if(low==high) return;
    mergesort(low,mid,nums);
    mergesort(mid+1,high,nums);
    merge(nums,low,high,mid);
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int low=0;
    int high=n-1;
    mergesort(low,high,nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}