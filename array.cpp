#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl; 
    }
    int sum =0;
    for(int i=0;i<n;++i){
        sum = sum +a[i];
    }
        cout<<sum;
    int sum1 =0;
    for(int j=0;j<m;++j){
        sum1 = sum1 +a[j];
    }
        cout<<sum1;
    int sum2 =sum + sum1;
    cout <<sum2;
}
