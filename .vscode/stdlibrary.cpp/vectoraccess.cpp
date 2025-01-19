#include<bits/stdc++.h>
using namespace std;
void explain_vector(){
    vector<int>v; //declare vector
    v.push_back(1); //create
    v.emplace_back(2);
    cout<<v[0];
}
int main(){
    explain_vector();
}