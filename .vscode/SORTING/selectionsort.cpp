/*#include<bits/stdc++.h>
using namespace std;
void func(vector<int>&a,int n){
    for(int i=0;i<n-1;i++){
        int min =i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min =j;
            }
        }
        int temp = a[min];
        a[min] =a[i];
        a[i] = temp;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
        for(int i =0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        func(a,n);
        for(int i =0;i<n;i++){
            cout<<a[i]<<" ";
        }
}
*/

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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                swap(a[j],a[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}