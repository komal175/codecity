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
    int i=0;
    int j=0;
    vector<int> answer;
    while(i<n1 && j<n2){
        if(num1[i]<num2[j]){
            i++;
        }
        else if(num2[j]<num1[i]){
            j++;
        }
        else{
            answer.push_back(num1[i]);
            i++;
            j++;
        }
    }
    for(int k=0;k<answer.size();k++){
        cout<<answer[k]<<" ";
    }
}