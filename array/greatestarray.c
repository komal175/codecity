#include<bits/stdc++.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int max =a[0][0];
    int min =a[0][0];
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(a[i][j]>max){
                a[i][j]=max;
            }
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(a[i][j]<min){
                a[i][j]=min;
            }
        }
    }
    printf("%d",max);
    printf("%d",min);
}