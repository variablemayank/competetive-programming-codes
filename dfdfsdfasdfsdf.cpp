#include<stdio.h>
#include<bitset>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
#include<algorithm>
#include<set>
#include<stack>
#include<queue>
#include<assert.h>
#include<utility>
using namespace std;

typedef long long int ll;

#define For(i,s,e) for(int i=(s);i<=(e);i++)
#define mp(a,b) make_pair((a),(b))

#define pi(x) printf("%d",(x))
#define pl(x) printf("%lld",(x))
#define pe() printf("\n")
#define ps(x)   printf("%s",(x))

#define si(x) scanf("%d",&(x))
#define sl(x) scanf("%lld",&(x))
#define ss(x) scanf("%s",(x))
#define MaxN 100008
int visited[MaxN];
vector<pair<int,ll> > graph[MaxN];
ll sum1[MaxN] , sum2[MaxN],N,sub[MaxN];
void dfs1( int root )
{
    visited[root] = 1;
    sub[root] = 0;
    for(vector<pair<int,ll> >:: iterator it = graph[root].begin();it!=graph[root].end();it++){
        if( visited[(*it).first] )  continue;
        else{
                dfs1((*it).first);
                sub[root] += sub[(*it).first];
                sum1[root] += sum1[(*it).first] + (ll)(*it).second*sub[(*it).first];
        }
    }
    sub[root]++;
}
void dfs2(int root)
{
    if (root == 1){
        sum2[root] = sum1[root];
    }
    visited[root] = 1;
    for(vector<pair<int,ll> >:: iterator it = graph[root].begin();it!=graph[root].end();it++){
        if( visited[(*it).first] )  continue;
        else{
            sum2[(*it).first] = (sum1[(*it).first] + (sum2[root] - sum1[(*it).first] - (*it).second*sub[(*it).first]) + ((*it).second)*((ll)N-sub[(*it).first]) );
            dfs2((*it).first);
        }
    }
}
int sumN;
void solve()
{
    int x,y;ll z;
    scanf("%lld",&N);
    sumN += N;
    assert(N>=1 && N<=100000);
    for(int i=1;i<=N;i++)   graph[i].clear(),sum1[i] = sum2[i] = 0;
    for(int i=1;i<N;i++){
        scanf("%d%d%lld",&x,&y,&z);
        assert(x!=y);
        assert(x>=1 && x<=N );
        assert(y>=1 && y<=N );
        assert(z>=1 && z<=1000000);
        graph[x].push_back(make_pair(y,z));
        graph[y].push_back(make_pair(x,z));
    }
    for(int i=1;i<=N;i++)   visited[i] = 0;
    dfs1(1);
    for(int i=1;i<=N;i++)   visited[i] = 0;
    dfs2(1);
    for(int i=1;i<=N;i++)   printf("%lld\n",sum2[i]);
}
int main()
{
    sumN = 0;
    int T;
    scanf("%d",&T);
    assert(T>=1 && T<=3 );
    while(T--){
        solve();
    }
    assert(sumN >=1 && sumN <= 200000);
    return 0;
}
