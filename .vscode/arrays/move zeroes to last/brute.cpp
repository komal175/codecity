#include<bits/stdc++.h>
using namespace std;
void movezeroes(int n,vector<int> &a){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(a[i] != 0){
            temp.push_back(a[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        a[i]=temp[i];
    }
    for(int i=temp.size();i<n;i++){
        a[i]=0;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    movezeroes(n,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}