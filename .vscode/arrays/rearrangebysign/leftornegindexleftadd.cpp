//if positive or negative index left add at last
#include<bits/stdc++.h>//equal negative and positive numbers
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> pos,neg;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            nums[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        int index =pos.size() *2;
        for(int i=pos.size();i<neg.size();i++){
            nums[index]=neg[i];
            index++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}