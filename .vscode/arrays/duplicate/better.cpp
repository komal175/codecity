#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    int index=0;
    for(auto it:st){
        a[index]=it;
        index++;
    }
    cout<<index<<"\n";
    for(int i=0;i<index;i++){
        cout<<a[i]<<" ";
    }
}