#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int reverse=0;
    while(n>0){
        reverse = reverse*10+n%10;
        n =n/10;
    }
    cout<<reverse;

}