#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //prestoring
    int hash[n]={0};
    for(int i =0;i<n;i++){
        hash[a[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
    
    //fetching
    cout<<hash[number]<<endl;
    }
    return 0;
}