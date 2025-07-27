#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        long long int c;
        cin>>n>>c;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        long long int ans=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]*1<<j <=c){
                ans++;
                j++;
            }
        }
        cout<<n-ans<<"\n"; 
    }
}