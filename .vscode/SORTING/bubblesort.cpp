#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    //Bubble sort
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-i;j++){
            int temp = a[j];
            if(a[j-1]>a[j]){
                a[j]=a[j-1];  //swap(a[j-1]=a[j])
                a[j-1]=temp;
            }
        }
    }
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}