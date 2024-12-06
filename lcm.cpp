#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int cthnum;
    for(int i=2;c>0;i++){
        int i;
        if(i%a ==0 || i%b==0){
            c--;
            cthnum =i;
        }
    }
}
    
