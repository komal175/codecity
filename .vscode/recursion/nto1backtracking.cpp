#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i>n) return;
    i++;
    print(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin >>n;
    print(1,n);
}