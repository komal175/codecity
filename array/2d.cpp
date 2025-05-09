#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4];
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
            arr[2][3]=10;
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
