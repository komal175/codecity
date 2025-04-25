#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        sum+=nums[i];
    }
    int sumofnaturalnum=n*(n+1)/2;
    int missingnum=sumofnaturalnum-sum;
    cout<<missingnum;
}