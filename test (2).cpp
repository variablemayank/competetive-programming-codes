//satyaki3794
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cassert>
#include <cstring>
#include <cmath>
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)
#define LEFT(n) (2*(n))
#define RIGHT(n) (2*(n)+1)

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;


int n, m, exam[100005], prep[100005];
int seen[100005];


bool possible(int mid)
{

    for(int i=1;i<=m;i++)
        seen[i] = 0;

    vector<int> v;
    for(int i=mid;i>=1;i--)
	{
        
        if(exam[i] == 0 || seen[exam[i]] != 0)   continue;
        v.pb(exam[i]);
        seen[exam[i]] = i;
        cout<<"pushed "<<exam[i]<<" at day "<<i<<endl;
    }

    if(v.size() != m)   return false;

    cout<<"v: ";for(int i=0;i<(int)v.size();i++)    cout<<v[i]<<" ";cout<<endl;
    cout<<"seen: ";for(int i=1;i<=m;i++)    cout<<seen[i]<<" ";cout<<endl;

    int last = seen[v[0]], avail = 0, next = 0;
     cout<<"last = "<<last<<endl;

    for(int i=1;i<=last && !v.empty();i++){

      cout<<"i = "<<i<<endl;
        if(seen[v.back()] == i)
		{
     cout<<"now at "<<i<<" "<<v.back()<<" and avail = "<<avail<<endl;
            if(avail < prep[v.back()])   return false;
            avail -= prep[v.back()];
            next++;
            v.pop_back();

    cout<<"gave exam "<<exam[i]<<" on day "<<i<<" and avail is now "<<avail<<endl;
     cout<<"and v: ";for(int i=0;i<(int)v.size();i++)    cout<<v[i]<<" ";cout<<endl;

        }
        else
		{
            avail++;
        }
    }

    return true;
}




int main(){

    // ios_base::sync_with_stdio(0);
    // freopen("input.txt", "r", stdin);

    scanf("%d%d", &n, &m);
    for(int i=1;i<=n;i++)
        scanf("%d", &exam[i]);
    for(int i=1;i<=m;i++)
        scanf("%d", &prep[i]);

// cout<<possible(4)<<endl;

    int lo = 1, hi = n, ans = n+1;
    while(lo <= hi){

        int mid = (lo + hi)/2;
        if(possible(mid)){
            ans = min(ans, mid);
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }

    if(ans == n+1)  ans = -1;
    cout<<ans;
    return 0;
}

