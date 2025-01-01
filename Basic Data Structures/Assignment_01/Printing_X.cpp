#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=n,col=n;
    char a[n][n];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            a[i][j]=' ';
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                a[i][j]='\\';
            }
           
            if(i+j==row-1){
               a[i][j]='/';
            }
            if(i==n/2 && j==n/2){
                a[i][j]='X';
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}