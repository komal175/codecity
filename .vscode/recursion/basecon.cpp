#include<bits/stdc++.h>
using namespace std;
void f(int cnt){ //declare the parameter type inside func
    if(cnt==3){
        return;
    }
    cout<<cnt<<" ";
    cnt++;
    f(cnt); 
}
int main(){
    int cnt =0; //initialise cnt =0
    f(cnt);
    return 0;     //start recursion with cnt 0 or f(0)
}