#include<bits/stdc++.h>

using namespace std;

#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define snuke(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)

typedef long long ll;
#define INF (1ll<<60)

int N;
int a[200010];
ll dist[400010];
int p[400010];
vector <int> graph[400010];

void dfs(int x, ll d){
    dist[x] = d;
    int i;
    REP(i,graph[x].size()){
        int y = graph[x][i];
        ll d2 = min(d + a[y%N], INF);
        dfs(y, d2);
    }
}

int main(void){
    int i;
    
    cin >> N;
    REP(i,N-1) scanf("%d", &a[i+1]);
    
    for(i=1;i<N;i++){
        p[i] = ((i+a[i] < N) ? (N+i+a[i]) : -1);
        p[N+i] = ((i-a[i] >= 0) ? (i-a[i]) : -1);
    }
    
    for(i=1;i<N;i++){
        if(p[i] != -1) graph[p[i]].push_back(i);
        if(p[N+i] != -1) graph[p[N+i]].push_back(N+i);
    }
    
    REP(i,2*N) dist[i] = INF;
    dfs(0, INF);
    for(i=1;i<N;i++) if(p[i] == -1) dfs(i, a[i]);
    for(i=1;i<N;i++) if(p[N+i] == -1) dfs(N+i, a[i]);
    
//  REP(i,2*N) cout << p[i] << endl;
    
    REP(i,N-1){
        ll ans = dist[N+i+1];
        if(ans == INF){
            ans = -1;
        } else {
            ans += i + 1;
        }
        printf("%I64d\n", ans);
    }
    
    return 0;
}
