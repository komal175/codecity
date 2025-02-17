#include<bits/stdc++.h>
using namespace std;
void print(int n,int sum){
    if(n<1){
        cout<<sum;
        return;
    }
    sum = sum +n;
    print(n-1,sum);
}
int main(){
    int n;
    cin>>n;
    print(n,0);
}