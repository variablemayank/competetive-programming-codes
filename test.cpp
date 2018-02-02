#include <bits/stdc++.h>
using namespace std;

#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

vector<long long> X[5];
long long dp[300005], ptr[300005][2];

void solve()
{
    if(!X[1].empty())
    {
        dp[1] = X[1][0];
        trace1(dp[1]);
        ptr[1][0] = 1, ptr[1][1] = 0;
    }

    for(int i=2; i<=30; i++)
    {
        dp[i] = dp[i-1];
        ptr[i][0] = ptr[i-1][0], ptr[i][1] = ptr[i-1][1];

        if(ptr[i-1][0]<X[1].size())
        {
            if(dp[i]<dp[i-1] + X[1][ptr[i-1][0]])
            {
            	cout<<"first"<<i<<endl;
           	    trace4(dp[i],dp[i-1],X[1][ptr[i-1][0]],dp[i-1] + X[1][ptr[i-1][0]]);
                dp[i] = dp[i-1] + X[1][ptr[i-1][0]];
                ptr[i][0] = ptr[i-1][0] + 1;
                ptr[i][1] = ptr[i-1][1];
            }
        }
        
		if(ptr[i-2][1]<X[2].size())
        {
        
            if(dp[i]<dp[i-2] + X[2][ptr[i-2][1]])
            {
            	cout<<"second"<<i<<endl;
            	trace4(dp[i],dp[i-2],X[2][ptr[i-2][1]],dp[i-2] + X[2][ptr[i-2][1]]);
                dp[i] = dp[i-2] + X[2][ptr[i-2][1]];
                ptr[i][0] = ptr[i-2][0];
                ptr[i][1] = ptr[i-2][1] + 1;
            }
        }
    }
    for(int i=0;i<=25;i++)
    {
    	for(int j=0;j<=2;j++)
    	{
    		cout<<ptr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    while(N--)
    {
        int w, c;
        scanf("%d %d", &w, &c);

        X[w].push_back(c);
    }

    for(int i=1; i<=3; i++)
    {
        sort(X[i].begin(), X[i].end());
        reverse(X[i].begin(), X[i].end());
    }

    int wt = M;
    long long ans = 0, sum = 0;

    solve();

    for(int i=0; i<=X[3].size(); i++)
    {
        if(i)
        {
            sum += X[3][i-1];
            trace1(X[3][i-1]);
            
            wt -= 3;
        }

        if(wt>=0)
        {
        	
            ans = max(ans, sum + dp[wt]);
            trace3(ans,sum,sum+dp[wt]);
        }
    }

    printf("%lld\n", ans);
    return 0;
}
