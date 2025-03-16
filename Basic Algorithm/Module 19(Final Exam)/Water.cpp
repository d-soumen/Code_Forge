#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int mx1=INT_MIN,mx2=INT_MIN;
        int mx1_index=-1,mx2_index=-1;
        for(int i=0;i<n;i++){
            if(v[i]>mx1){
                mx1=v[i];
                mx1_index=i;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=mx1_index){
                if(v[i]>mx2){
                    mx2=v[i];
                    mx2_index=i;
                }
            }
        }
        if(mx1_index > mx2_index){
            swap(mx1_index,mx2_index);
        }
        cout<<mx1_index<<" "<<mx2_index<<endl;
    }
    return 0;
}