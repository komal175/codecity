#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a = n;
    int reverse=0;
    while(n>0){
        reverse=reverse*10+n%10;
        n =n/10;
    }
    cout<<reverse<<"\n";
    if(a==reverse){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}