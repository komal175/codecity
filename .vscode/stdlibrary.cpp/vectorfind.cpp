#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    auto itfound =find(nums.begin(),nums.end(),8);
    if(itfound ==nums.end()){
        cout<<"8 not found";
    }
    else{
        cout<<*itfound;
    }
}