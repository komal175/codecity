#include<bits/stdc++.h>
using namespace std;
void explain_vector(){
    vector<int>v; //declare vector
    v.push_back(1); //create
    v.emplace_back(2);
    vector<int>::iterator it = v.begin(); //iterator gives the address i.e memory of the element v.end()-gives the address of the elt after last
    it++;
    cout<<*(it)<<" "; //gives the value at the given address
}
int main(){
    explain_vector();
    return 0;
}