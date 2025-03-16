#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
    long long int a,b,w;
    Edge(long long int a,long long int b,long long int w){
        this->a=a;
        this->b=b;
        this->w=w;
    }
};
const long long int N=1000;
long long int dis[N];
int main(){
    long long int n,e;
    cin>>n>>e;
    vector<Edge>e_list;
    while(e--){
        long long int a,b,w;
        cin>>a>>b>>w;
        e_list.push_back(Edge(a,b,w));
    }
    long long int inf=1e18;
    for(int i=1;i<=n;i++){
        dis[i]=inf;
    }
    long long int s;
    cin>>s;
    dis[s]=0;
    for(int i=1;i<=n-1;i++){
        for(Edge ed:e_list){
            long long int a,b,w;
            a=ed.a;
            b=ed.b;
            w=ed.w;
            if(dis[a]<inf && dis[a]+w < dis[b]){
                dis[b]=dis[a]+w;
            }
        }
    }
    bool cycle=false;
    for(Edge ed:e_list){
        long long int a,b,w;
        a=ed.a;
        b=ed.b;
        w=ed.w;
        if(dis[a]<inf && dis[a]+w < dis[b]){
            cycle=true;
            break;
        }
    }
    long long int Q;
    cin>>Q;
    while(Q--){
        long long int d;
        cin>>d;
        if(cycle){
            cout<<"Negative Cycle Detected"<<endl;
            break;
        }
        else if(dis[d]==inf){
            cout<<"Not Possible"<<endl;
        }
        else{
            cout<<dis[d]<<endl;
        }
    }
    return 0;
}