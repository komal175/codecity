#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a<0){
        cout <<"false";
        return 0;
    }
    int b = a;
    int reverse = 0;
    while(a>0){
        reverse = reverse*10 + a%10;
        a = a/10;
    }
    if(b == reverse){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
}