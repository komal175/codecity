#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &a,int start,int end){
    while(start<=end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
void rotatedplaces(int n,int d,vector<int> &a){
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
       cin>>a[i];
       cout<<a[i]<<" "; 
    }
    int d;
    cin>>d;
    cout<<"\n";
    rotatedplaces(n,d,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
