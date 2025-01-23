#include<bits/stdc++.h>
using namespace std;
void vector_insert(){
    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1,2,10);//{300,10,10,100,100}
    vector<int>copy(2,50); //{50,50}
    v.insert(v.begin(),copy.begin(),copy.endl());//{50,50,300,10,100,100}
    for(auto it:v){
        cout<<it<<" ";
    }
}