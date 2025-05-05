#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int cnt=0;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if( nums[i]==0){
            cnt++;
        }
        if(nums[i]==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    for(int i=0;i<cnt;i++){
        nums[i]=0;
    }
    for(int i=cnt;i<cnt+cnt1;i++){
        nums[i]=1;
    }
    for(int i=cnt+cnt1;i<n;i++){
        nums[i]=2;
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}