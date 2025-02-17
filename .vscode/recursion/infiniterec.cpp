#include<bits/stdc++.h>
using namespace std;
int happy(){
    cout<<"happy"<<"\n";
    happy(); //this function call waits
}
int main(){
    happy();
    return 0;
}