#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp =a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}