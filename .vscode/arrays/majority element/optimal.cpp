#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int el;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=nums[i];
        }
        else if(el ==nums[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(nums[i]==el){
            cnt1++;
        }
        if(cnt1>n/2){
            cout<<el;
        }
    }
}