#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=1;i<n+2;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(nums[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i;
            break;
        }
    }
}