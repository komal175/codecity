#include<iostream>
#include<vector>
using namespace std;
void explain_erase(){
    vector<int> v;
    v.push_back(3);
    v.emplace_back(6);
    v.emplace_back(8);
    v.emplace_back(2);
    v.emplace_back(4);
    v.erase(v.begin()+1);
    //{3,6,8,2,4}
    v.erase(v.begin()+2,v.begin()+4);//{3,6,4}
    for(auto it:v){
        cout<<it<<" ";
    }
}
int main(){
    explain_erase();
}