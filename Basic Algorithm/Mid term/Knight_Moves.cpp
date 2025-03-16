#include<bits/stdc++.h>
using namespace std;
bool vis[100][100];
int dis[100][100];
int n,m;
vector<pair<int,int>>v={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
bool valid(int i,int j){
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void bfs(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty()){
        pair<int,int>par=q.front();
        int a=par.first,b=par.second;
        q.pop();
        for(int i=0;i<8;i++){
            int ci= a+v[i].first;
            int cj=b+v[i].second;
            if(valid(ci,cj) && vis[ci][cj]==false){
                q.push({ci,cj});
                vis[ci][cj]=true;
                dis[ci][cj]=dis[a][b]+1;
            }

        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        
        cin>>n>>m;
        int ki,kj,Qi,Qj;
        cin>>ki>>kj;
        cin>>Qi>>Qj;
        
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        bfs(ki, kj);
        cout<<dis[Qi][Qj]<<endl;
    }
    return 0;
}