#include<bits/stdc++.h>
using namespace std;
int linearsearch(int n,vector<int> &nums,int searchnum){
    for(int i=0;i<n;i++){
        if(nums[i]==searchnum){
            return i;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int searchnum;
    cin>>searchnum;
    cout<<linearsearch(n,nums,searchnum);
}