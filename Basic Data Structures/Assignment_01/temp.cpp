#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=' ';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                a[i][j]='\\';
            }
           
            if(i+j==n-1){
               a[i][j]='/';
            }
            // if(i==n/2 && j==n/2){
            //     a[i][j]='X';
            // }
        }
    }

    a[n/2][n/2]='X';
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}