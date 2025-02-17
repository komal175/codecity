#include<bits/stdc++.h>
using namespace std;
int fact =1;
void print(int n){
    if(n<1){
        cout<<fact;
        return;
    }
    fact = fact*n;
    print(n-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
}