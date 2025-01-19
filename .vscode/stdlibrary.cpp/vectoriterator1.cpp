#include<bits/stdc++.h>
using namespace std;
void explain_vector(){
    vector<int>v; //declare vector
    v.push_back(1); //create
    v.emplace_back(2);
    v.emplace_back(5);
    for(vector<int>::iterator it = v.begin();it !=v.end();it++){
        cout<<*(it)<<" ";
    }
}
int main(){
    explain_vector();
    return 0;
}