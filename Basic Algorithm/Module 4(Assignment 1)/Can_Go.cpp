#include<bits/stdc++.h>
using namespace std;
char graph[1000][1000];
bool vis[1000][1000];
int n,m;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
bool valid(int x,int y){
    if(x>=0 && x<n && y>=0 && y<m && graph[x][y]=='.'|| graph[x][y]=='A'|| graph[x][y]=='B' ){
        return true;
    }
    else{
        return false;
    }
}
void dfs(int si,int sj){
    vis[si][sj]=true;
    for(int i=0;i<4;i++){
        int ci=si+dx[i];
        int cj=sj+dy[i];
        if(valid(ci,cj) && vis[ci][cj]==false){
            vis[ci][cj]=true;
            dfs(ci,cj);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>graph[i][j];
        }
    }
    int source_row, source_column;
    
    int destination_row, destination_column;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(graph[i][j]=='A'){
                source_row=i;
                source_column=j;
            }
            if(graph[i][j]=='B'){
                destination_row=i;
                destination_column=j;
            }
        }
    }

    dfs(source_row, source_column); 

    if (vis[destination_row][destination_column])
    {
        cout << "YES"<< endl;
    }
    else
        cout << "NO"<<endl;
    return 0;
}