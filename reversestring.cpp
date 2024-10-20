#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int s = str.size();
    string str_reverse;
    for(int i=s-1;i>=0;--i){
        str_reverse.push_back(str[i]);
    }
    cout <<str_reverse;
}