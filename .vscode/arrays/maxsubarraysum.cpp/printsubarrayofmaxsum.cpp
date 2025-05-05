//kadanes algorithm
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int sum=0;
    int maxi=INT_MIN;
    int ansstart=-1,ansend=-1,start=0;
    for(int i=0;i<n;i++){
        if(sum<0){
            sum=0;
            start=i;
        }
        sum+=nums[i];
        if(sum>maxi){
            maxi=max(maxi,sum);
            ansstart=start;
            ansend=i;
        }
    }
    for(int i=ansstart;i<=ansend;i++){
        cout<<nums[i]<<" ";
    }
}
