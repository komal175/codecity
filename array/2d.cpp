#include<bits/stdc++.h>
using namespace std;
int main(){
    //int arr[3][5];
    //arr[1][3] =7;
    //cout<<arr[1][2];
    //return 0;
    int n;
    cin>>n;
    int ans[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-i-1]=matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j]=ans[i][j];
        }
    }
}
