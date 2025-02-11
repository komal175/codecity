#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int f =0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                f +=j;
            }
        }
    }
    cout<<f;
}
