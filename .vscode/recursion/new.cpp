#include<bits/stdc++.h>
using namespace std;
void f(int cnt){
    if(cnt==3){
        return;
    }
    cout<<cnt;
    cnt++;
    f(cnt);
}
int main(){
    int cnt =0;
    f(int cnt);
}