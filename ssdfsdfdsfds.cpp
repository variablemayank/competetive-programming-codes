#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define MOD 10000007

ll expmod(ll base,ll pow)
{
    if(pow==0)
        return 1;
    if(pow==1)
        return base;
    ll res=expmod(base,pow/2);
    res=(res*res)%MOD;
    if(pow%2==1)
        res=(res*base)%MOD;
    return res;
}

int dp[109][2][10] , len;
string str;

int memoize( int dig , int cnt , int div )
{
    if( dig == len && div == 0 && cnt >= 1 )
        return 1;
    if( dig == len )
        return 0;
    if( dp[dig][cnt][div] != -1 )
        return dp[dig][cnt][div];
    int ans = 0;
    ans |= memoize( dig + 1 , cnt , div );
    ans |= memoize( dig + 1 ,  1 , ( div * 10 + (str[dig] - '0') ) % MOD );
    return dp[dig][cnt][div] = ans;
}

string out( int dig , int cnt , int div )
{
    //cout << dig << " " << cnt << " " << div << endl;
    if( dig == len )
        return "";
    if( memoize( dig + 1 , cnt , div ) )
        return out( dig + 1 , cnt , div);
    else
        return str[dig] + out( dig + 1 ,  1 , ( div * 10 + ( str[dig] - '0' ) ) % MOD );
}


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    memset(dp,-1,sizeof(dp));
    cin >> str;
    //reverse( str.begin() , str.end() );
    len = str.length();
    int ans = memoize( 0 , 0 , 0 );
    if( ans )
    {
        printf("YES\n");
        string ans = out( 0 , 0 , 0 );
        int sz = ans.size();
        int i = 0;
        while( i <= sz - 2 )
        {
            if( ans[i] != '0' )
                break;
            i++;
        }
        while( i <= sz-1 )
        {
            cout << ans[i];
            i++;
        }
        cout << endl;
    }
    else
        printf("NO\n");
    return 0;
}
