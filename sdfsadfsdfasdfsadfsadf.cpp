#include<bits/stdc++.h>
using namespace std;
	
#define jadu ios_base::sync_with_stdio(false);
#define rep(i,a,b) for (int i = a; i <= b; i++)
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

const int N = 1e5 + 5;
pair < int , pair < int , int > > arr[N];
pair < int , pair < int , int > > ans[N];
int arr1[N];
int arr2[N];
int cur1 = 0;
int cur2 = 0;
int m , n;
pair < int , pair < int , int > > edges[N];
int parent[N];
int find(int x){
    if(parent[x] == x){
        return x;
    }
    return parent[x] = find(parent[x]);
}
bool join(int a , int b){
    if(find(a) == find(b)){
        return 0;
    }
    parent[find(a)] = find(b);
    return 1;
}
int cur = 1;
int curr1 = 1;
int curr2 = 3;
void rekt(){
    puts("-1");
    exit(0);
}
vector < pair < int , int > > v;
int main(){
    scanf("%d %d" , &n , &m);
    for(int i = 1 ; i <= m ; ++i){
        scanf("%d %d" , &arr[i].first , &arr[i].second.first);
        arr[i].second.second = i;
        if(arr[i].second.first){
            arr1[++cur1] = arr[i].first;
        }
    }
    for(int i = 1 ; i <= n ; ++i){
        parent[i] = i;
    }
    sort(arr + 1 , arr + 1 + m);
    for(int i = 1 ; i <= m ; ++i){
        if(arr[i].second.first == 1){
            ans[arr[i].second.second] = make_pair(arr[i].first , make_pair(cur , cur + 1));
            ++cur;
        }
        else{
            v.emplace_back(make_pair(arr[i].second.second , arr[i].first));
        }
    }
    for(int i=1;i<=m;i++)
    {
    	trace3(ans[i].first,ans[i].second.first,ans[i].second.second);
	}
	
    int cnt = 0;
    for(int i = 3 ; i <= n ; ++i){
        for(int j = 1 ; j < i - 1 ; ++j){
            if(cnt == v.size()){
                i = n + 1;
                break;
            }
            ++cnt;
            ans[v[cnt - 1].first] = make_pair(v[cnt - 1].second , make_pair(i , j));
        }
    }
    for(int i = 1 ; i <= m ; ++i){
        edges[i] = ans[i];
    }
    sort(edges + 1 , edges + 1 + m);
    for(int i = 1 ; i <= m ; ++i){
        if(join(edges[i].second.first , edges[i].second.second)){
            arr2[++cur2] = edges[i].first;
        }
    }
    sort(arr1 + 1 , arr1 + 1 + cur1);
    sort(arr2 + 1 , arr2 + 1 + cur2);
    if(cur1 != cur2){
        rekt();
    }
    for(int i = 1 ; i <= cur1 ; ++i){
        if(arr1[i] != arr2[i]){
            rekt();
        }
    }
    for(int i = 1 ; i <= m ; ++i){
        printf("%d %d\n" , ans[i].second.first , ans[i].second.second);
    }
}
