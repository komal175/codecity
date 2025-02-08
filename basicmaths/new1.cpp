#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int reverse =0;
    if(n<0){
        cout<<"false";
    }
    long long int c =x;
    int reverse =0;
    while(c>0){
        reverse = reverse%10 + c%10;
    }
    cout<<reverse;
}

