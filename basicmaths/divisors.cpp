#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin >>n;
    for(long int i =1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}