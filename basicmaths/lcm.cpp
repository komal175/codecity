#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >>a>>b;
    int c = min(a,b);
    int f;
    for(int i =1;i<=c;i++){
        if(a%i==0 && b%i ==0){
            f = i;
        }
    }
    int lcm = (a*b)/f;
    cout<<lcm;
}