#include<bits/stdc++.h>
using namespace std;
void reverse(int n,vector<int> &a,int start,int end){
    while(start<=end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
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
    int start=0;
    int end =n-1;
    reverse(n,a,start,end);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}