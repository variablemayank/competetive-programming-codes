#include<bits/stdc++.h>
using namespace std;

typedef long long int LL;

#define inp_s     ios_base::sync_with_stdio(false)
#define DRT()     int test_case;cin>>test_case;while(test_case--)

#define VI        vector<int>
#define VS        vector<string>
#define VLL       vector<LL>
#define PII       pair<int,int>
#define all(c)    c.begin(),c.end()
#define sz(c)     c.size()
#define clr(c)    c.clear()
#define msi       map<string,int>
#define msit      map<string,int>::iterator
#define pb        push_back
#define mp        make_pair

#define GI(x)     scanf("%d",&x)

#define FOR(i,a,b)      for(int i=a;i<b;i++)
#define RFOR(i,a,b)     for(int i=b-1;i>=a;i--)

#define gcd(a,b)  __gcd(a,b)
#define MOD       1000000007
#define EPS       1E-10

#define PI  acos(-1)

#define endn    "\n"

#define CASE(x)   cout << "Case #" << x << ": ";

int poss(int i,int j,int n,int m)
{
    if(i >= 0 && i < n && j >= 0 && j < m) return 1;
    else return 0;
}

int main()
{
    inp_s;
    int n,m,k;
    cin >> n >> m >> k;
    VS grid(n);
    FOR(i,0,n) cin >> grid[i];
    int mat[n][m];
    FOR(i,0,n)
    {
        FOR(j,0,m)
        {
            if(grid[i][j] == '.') mat[i][j] = 1;
            else mat[i][j] = 0;
        }
    }
    int visited[n][m];
    queue<PII> bfs;
    FOR(i,0,n) FOR(j,0,m) visited[i][j] = 0;
    int f = 0;
    FOR(i,0,n)
    {
        FOR(j,0,m)
        {
            if(mat[i][j])
            {
                bfs.push(mp(i,j));
                visited[i][j] = 1;
                f = 1;
                break;
            }
        }
        if(f) break;
    }
    stack<PII> removal;
    while(!bfs.empty())
    {
        PII ele = bfs.front();
        removal.push(ele);
        cout<<bfs.front().first<<" "<<bfs.front().second<<endl;
       bfs.pop();
        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,-1,1};
        FOR(i,0,4)
       {
            int nx = dx[i] + ele.first;
            int ny = dy[i] + ele.second;
            if(!poss(nx,ny,n,m) or visited[nx][ny] or mat[nx][ny] == 0) continue;
            visited[nx][ny] = 1;
            bfs.push(mp(nx,ny));
        }
    }
    FOR(i,0,k)
    {
        PII ele = removal.top();
        removal.pop();
        grid[ele.first][ele.second] = 'X';
    }
    FOR(i,0,n)
        cout << grid[i] << endn;
    return 0;
}
