#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin >>a>>b;
    cout<<" "<<b.size()<<endl;
    string c = a+b;
    cout <<c<<endl;
    swap(a[0],b[0]);
    cout <<a<<" "<<b;
    return 0;
}

