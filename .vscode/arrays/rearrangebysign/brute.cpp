#include<bits/stdc++.h>//equal negative and positive numbers
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int index=0;
    int index1=0;
    vector<int> neg,pos;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            neg.push_back(nums[i]);
            index++;
        }
        else{
            pos.push_back(nums[i]);
            index1++;
        }
    }
    for(int i=0;i<n/2;i++){
        nums[2*i]=pos[i];
        nums[2*i+1]=neg[i];
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}