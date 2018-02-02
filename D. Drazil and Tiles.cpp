#include<bits/stdc++.h>
using namespace std;
	
#define jadu ios_base::sync_with_stdio(false);
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define REPP(I, A, B) for (int I = (A); I < (B); ++I)
#define REP(I, N) for (int I = 0; I < (N); ++I)
#define f first
#define s second
#define lelo(x) scanf("%d",&x);
#define dedo(x) printf("%d",x); 	
#define PB push_back
#define MP make_pair
#define sz(c)     (int)c.size()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int mod = 1000000007;
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }

const int SIZE = 2e3+10;
char s[SIZE][SIZE];
int deg[SIZE][SIZE];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
char fl[2][8]={"^<v>","v>^<"};
pair<int,int>bfs[SIZE*SIZE];
int n,m;
int main(){
    int ll=0,rr=0;
    cin>>n>>m;
    REP(i,n)RS(s[i+1]+1);
    int sp=0;
    REPP(i,1,n+1)REPP(j,1,m+1){
        REP(k,4){
            int nx=i+dx[k];
            int ny=j+dy[k];
            if(s[nx][ny]=='.')deg[i][j]++;
        }
        if(s[i][j]=='.'){
            sp++;
            if(deg[i][j]==1)bfs[rr++]=MP(i,j);
        }
    }
    while(ll<rr){
        int x=bfs[ll].F;
        int y=bfs[ll].S;
        if(s[x][y]=='.'){
            int nx,ny;
            int id=-1;
            bool suc=0;
            REP(k,4){
                nx=x+dx[k];
                ny=y+dy[k];
                id=k;
                if(s[nx][ny]=='.'){
                    suc=1;
                    break;
                }
            }
            if(!suc){
                puts("Not unique");
                return 0;
            }
            s[x][y]=fl[0][id];
            s[nx][ny]=fl[1][id];
            deg[x][y]=0;
            deg[nx][ny]=0;
            REP(k,4){
                int nnx=nx+dx[k];
                int nny=ny+dy[k];
                deg[nnx][nny]--;
                if(deg[nnx][nny]==1)bfs[rr++]=MP(nnx,nny);
            }
        }
        ll++;
    }
    REP(i,n)REP(j,m)if(s[i+1][j+1]=='.'){
        puts("Not unique");
        return 0;
    }
    REP(i,n)puts(s[i+1]+1);
    return 0;
}
