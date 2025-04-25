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
    int vis[n2]={0};
    vector<int> answer;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(num1[i]==num2[j] && vis[j]==0){
                answer.push_back(num1[i]);
                vis[j]=1;
                break;
            }
            if(num2[j]>num1[i]) break;
        }
    }
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
}