#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> num1(n1);
    for(int i=0;i<n1;i++){
        cin>>num1[i];
    }
    vector<int> num2(n2);
    for(int i=0;i<n2;i++){
        cin>>num2[i];
    }
    vector<int>unionarr;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(num1[i]<=num2[j]){
            if(unionarr.size()==0 || unionarr.back()!=num1[i]){
                unionarr.push_back(num1[i]);
            }
            i++;
        }
        else if(num2[j]<num1[i]){
            if(unionarr.size()==0 || unionarr.back()!=num2[j]){
                unionarr.push_back(num2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionarr.size()==0 || unionarr.back()!= num1[i]){
            unionarr.push_back(num1[i]);
        }
        i++;
    }
    while(j<n2){
        if(unionarr.size()==0 ||unionarr.back()!=num2[j]){
            unionarr.push_back(num2[j]);
        }
        j++;
    }
    for(int k=0;k<unionarr.size();k++){
        cout<<unionarr[k]<<" ";
    }
}

