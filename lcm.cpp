#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    for(int i =1;i<=c;++i){
        if(i%a ==0 || i%b==0){
            cout<<i;
        }
    }
}