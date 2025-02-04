#include<bits/stdc++.h>
using namespace std;
void starpyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        for(int l=1;l<=n-i-1;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void starpyramidreverse(int n){
    for(int i=0;i<n;i++){
            for(int j=1;j<=i;j++){
                cout<<" ";
            }
            for(int k=1;k<2*n-2*i;k++){
                cout<<"*";
            }
            for(int l=1;l<=i;l++){
                cout<<" ";
            }
            cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    starpyramid(n);
    starpyramidreverse(n);
}