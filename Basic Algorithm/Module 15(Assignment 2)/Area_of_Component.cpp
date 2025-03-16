#include<bits/stdc++.h>
#define pi pair<int,int>
using namespace std;
const int N=1e3+5;
char grid[N][N];
int n,m;
bool vis[N][N];
vector<pi>d={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i,int j){
    return (i>=0 && i<n && j>=0 && j<m);
}
int dfs(int si,int sj){
    vis[si][sj]=true;
    int area=1;
    for(int i=0;i<4;i++){
        int ci=si+d[i].first;
        int cj=sj+d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='.'){
            area+=dfs(ci,cj);

        }
    }
    return area;
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    int mn_area=1e18;
    bool comp=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='.' && !vis[i][j]){
                comp=true;
                int area=dfs(i,j);
                mn_area=min(mn_area,area);
            }
        }
    }
    if(comp){
        cout<<mn_area<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}