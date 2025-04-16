/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp =a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    for(int i=0;i<n;i++){
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
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j],a[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}