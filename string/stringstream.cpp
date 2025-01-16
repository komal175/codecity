#include<bits/stdc++.h>
using namespace std;
int main(){
    stringstream ss;
    int num =42;  
    ss <<num;     //write integer to the string
    string str;
    ss>>str;      //read string from the stream
    cout<<"string"<<str<<endl;
}