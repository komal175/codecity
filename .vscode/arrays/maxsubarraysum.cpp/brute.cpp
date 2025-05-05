#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int maxi=INT_MIN;
    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<j;k++){
                sum +=nums[k];
                maxi=max(maxi,sum);
            }
        }
    }
    cout<<maxi;
}