/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for(i=0;i<a.size()-1,++i){
        a[i]='z' =int x;
        a[i]='o' = int y;
        if(x==2y){
            cout<<"YES";
        }
        else {
            cout <<"NO";
        }
    }
}
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;

    int x = 0; // Count of 'z'
    int y = 0; // Count of 'o'

    for (char c : a) {
        if (c == 'z') {
            x++;
        } else if (c == 'o') {
            y++;
        }
    }

    if (x == 2 * y) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}


