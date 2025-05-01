#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k;
    cin>>k;
    int sum=0;
    int maxlen=0;
    map<long long int,int> mpp;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        int rem=sum-k;
        if(mpp.find(rem)!=mpp.end()){
            int len=i-mpp[rem];
            maxlen=max(maxlen,len);
        }
        if(mpp.find(sum)==mpp.end()){
            mpp[sum]=i;
        }
    }
    cout<<maxlen;
}