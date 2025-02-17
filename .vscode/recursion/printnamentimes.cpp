#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i>n) return;
    cout<<"happy"<<"\n";
    i++;
    print(i,n);
}
int main(){
    int n;
    cin>>n;
    int i = 1;
    print(i,n);
}