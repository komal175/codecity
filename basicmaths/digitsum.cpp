#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int digit_sum =0;
        while(n>0){
            int last_digit =n%10;
            digit_sum += last_digit;
            n=n/10;
        }
        cout<<digit_sum<<endl;
    }
}
