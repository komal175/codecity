/*Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin >>a>>b;
    string c;
    for(int i =0;i<a.size()-1;++i){
        for(int j=0;j<b.size()-1;++j){
            if (a[i]!=b[j]){
                c +=c;
            }
            cout <<c<<b;
        }
    }
}
