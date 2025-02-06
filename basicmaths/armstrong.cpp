#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a =n;
    int cnt =0;
    int temp =n;
    while(temp>0){
        cnt = cnt +1;
        temp = temp/10;
    }
    int d = cnt;
    int arm =0;
    while(a>0){
        int ld = a%10;
        int power =1;
        for(int i=0;i<d;i++){
            power *= ld;
        }
        arm = arm +power;
        a = a/10;
    }
    if(arm == n){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not armstrong number";
    }
}