#include<iostream>
#include<vector>
using namespace std;
void explain_erase(){
    vector<int> v;
    v.push_back(3);
    v.emplace_back(6);
    v.emplace_back(8);
    v.emplace_back(2);
    v.erase(v.begin()+1);
    v.erase(v.begin()+2,v.begin()+4);
    for(auto it:v){
        cout<<it<<" ";
    }
}
int main(){
    explain_erase();
}