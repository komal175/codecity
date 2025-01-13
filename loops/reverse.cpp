#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin >>n;
        long int reverse=0;
        while(n>0){
            int last_digit=n%10;
            reverse = reverse*10 + last_digit;
            n =n/10;
        }
        cout <<reverse<<endl;
    }
}