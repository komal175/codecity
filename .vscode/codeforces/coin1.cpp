#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        long long int c;
        cin>>n>>c;
        vector<long long int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        int good=0;
        while(!nums.empty()){
            while(!nums.empty() &&nums.back()>c){
                nums.pop_back();
            }
            if(!nums.empty() && nums.back()<=c){
                good++;
                nums.pop_back();
                for(auto &x:nums) x*=2;
                sort(nums.begin(),nums.end());
            }
        }
        cout<<n-good<<"\n";
    }
}