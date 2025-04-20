#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //insertion
    for(int i=0;i<n-1;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j-1],a[j]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}