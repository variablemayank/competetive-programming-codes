#include<bits/stdc++.h>
using namespace std;
long long n,m,k;
vector<long long>adj[1002];
bool visited[1002];
long long a[1002];
long long result[1002];
 
void dfs(long long s,long long l){
    visited[s]=true;
    a[l++]=s;
    for(long long i=0;i<adj[s].size();i++){
        if(visited[adj[s][i]]==false){
            dfs(adj[s][i],l);
        }
    }
}
int main(){
    cin>>n>>m>>k;
    long long i,p,q,l,j;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++){
        cin>>p>>q;
        adj[p].push_back(q);
        adj[q].push_back(p);
    }    
    for(i=1;i<=n;i++){
        l=0;
        for(j=1;j<=n;j++){
            visited[j]=false;
        }
        for(j=0;j<=n;j++){
            a[j]=0;
        }
        dfs(i,l);
        sort(a,a+n);
        cout<<a[k-2]<<endl;
    }
    return 0;
}
