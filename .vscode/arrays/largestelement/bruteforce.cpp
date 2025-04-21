#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &a,int low,int high){
    int i=low;
    int j=high;
    int pivot=a[low];
    while(i<j){
        while(a[i]<=pivot && i<=high-1){
            i++;
        }
        while(a[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(a[i],a[j]);
    }
    swap(a[low],a[j]);
    return j;
}
void qs(vector<int> &a,int low,int high){
    if(low<high){
        int pindex=partition(a,low,high);
        qs(a,low,pindex - 1);
        qs(a,pindex + 1,high);
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
    int low=0;
    int high=n-1;
    qs(a,low,high);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"largest element is : "<<a[n-1];
}