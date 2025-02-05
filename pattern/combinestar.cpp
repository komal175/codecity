#include<bits/stdc++.h>
using namespace std;
void star(int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void reversestar(int n){
    for(int i=n-1;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
    cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    star(n);
    reversestar(n);
}