#include<bits/stdc++.h>
using namespace std;
void  count(int n){
    int count =0;
    int temp =n;
    while(temp>0){
        int ld = temp%10;
        if(ld !=0 && n%ld==0){
            count = count +1;
        }
        temp = temp/10;
    }
    cout<<count;
}
int main(){
    int n;
    cin>>n;
    count(n);
}