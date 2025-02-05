#include<bits/stdc++.h>
using namespace std;
void  count(int n){
    int count =0;
    while(n>0){
        count = count +1;
        n = n/10;
    }
    cout<<count;
}
int main(){
    int n;
    cin>>n;
    count(n);
}