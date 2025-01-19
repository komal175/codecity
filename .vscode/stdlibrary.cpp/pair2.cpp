#include<bits/stdc++.h>
using namespace std;
void explain_pair(){
    pair<int,pair<int,int>>p={1,{3,4}};
    cout<<p.first<<" "<<p.second.second<<p.second.first;
}
int main(){
    explain_pair();
    return 0;
}