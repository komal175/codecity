/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout <<s;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str ="Hello";
    str[0] = 'a';
    cout<<str<<endl<<str.size();
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();//to avoid space of input
    while(t--){
        string j;
        getline(cin,j);
        cout <<j<<endl;
    }
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    string str_reverse;
    for(int i=str.size()-1;i>=0;--i){
        str_reverse.push_back(str[i]);
    }
    cout << str_reverse;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    for(int i=0;i<n;++i){
        if(s[i]==s[n-i] ){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }
}


