#include<bits/stdc++.h>
using namespace std;
void explain_fun(){
    vector<int>v;
    v.push_back(4);
    v.emplace_back(6);
    v.emplace_back(3);
    v.emplace_back(9);
    cout<<v.size(); // 4
    v.pop_back(); //4,6,3,9
    //v1 - 10,20
    //v2 - 34,56
    v1.swap(v2); //v1-34,56 v2-10,20
    v.clear(); //erases the entire vector
    cout<<v.empty(); 
}