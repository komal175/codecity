#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        int num=nums[i];
        int cnt=0;
        for(int j=0;j<n;j++){
            if(nums[j]==num){
                cnt++;
            }
        }
        if(cnt==1){
            cout<<nums[i];
            break;
        }
    }
}