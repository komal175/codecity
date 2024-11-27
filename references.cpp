/*#include<bits/stdc++.h>
using namespace std;
void increment(int &n){
    n++;
}
int main(){
    int a =3;
    cout<<a<<endl;
    increment(a);//to call the function
    cout<<a<<endl; 
}
*/
/*#include<bits/stdc++.h>
using namespace std;
void increment(int &n,int &n1){
    n++;
    n1++;
}
int main(){
    int a =3;
    int b =5;
    cout <<a<<" "<<b<<endl;
    increment(a,b);
    cout <<a<<" "<<b<<endl;
}
*/
/*#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int temp =a;
    a=b;
    b = temp;
}
int main(){
    int a=3;
    int b=5;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}
*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int a =3;
    int b =5;
    cout<<min(a,b);
}
*/
/*#include<bits/stdc++.h>
using namespace std;
void func(string &s){
    s="";
}
int main(){
    string s ="hhfsd";
    cout<<s<<endl;
    func(s);//void func return nothing unless called
    cout<<s<<endl;
}
*/
/*#include<bits/stdc++.h>
using namespace std;
void func(int a[]){//array pass by reference itself
    a[0]=5;
}
int main(){
    int a[10];
    a[0] =7;
    cout<<a[0]<<endl;
    func(a);
    cout<<a[0]<<endl;
}
*/
/*#include<bits/stdc++.h>
using namespace std;
void func(a[][20]){//size should be specified if it's not column array
    a[0][0]=5;
}
int main(){
    int n,m;
    int a[n][m];
    a[0][0] =7;
    cout<<a[0][0]<<endl;
    func(a);
    cout<<a[0][0]<<endl;
}
*/
/*#include<bits/stdc++.h>
using namespace std;
const int n = 1e3+10;//we can't specify the size in main function but can declare globally
int a[n][n];
void func(){
    a[0][0] =5;
}
int main(){
    a[0][0] =6;
    cout<<a[0][0]<<endl;
    func();
    cout<<a[0][0]<<endl;
}
*/
