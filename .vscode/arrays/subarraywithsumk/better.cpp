#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    map<long long int,int> presummap;
    long long sum =0;
    int maxlen=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==k){
            maxlen=max(maxlen,i+1); 
        }
    }
}