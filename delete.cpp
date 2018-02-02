#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long LL;

map<LL, int> mp;
map<LL, int>::iterator it;

LL my_pow(LL m, LL n, LL mod)
{
    LL ans = 1, p = m;
    while (n)
    {
        if (n & 1)
        {
            ans *= p;
            ans %= mod;
        }
        p *= p;
        p %= mod;
        n >>= 1;
    }
    return ans;
}

int main()
{
    int n;
    LL p, dn = 1, ans= 1;
    bool ev = false;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        it = mp.find(p);
        if (it == mp.end())
            mp.insert(make_pair(p, 1));
        else
            it->second++;
    }
    for (it = mp.begin(); it != mp.end(); it++)
    {
        if (!ev && ((it->second)%2==1))
        {
            dn *= (it->second + 1) >> 1;
            if (dn >= MOD - 1)
                dn %= (MOD - 1);
            ev = true;
        }
        else
        {
            dn *= (it->second + 1);
            if (dn >= MOD - 1)
                dn %= (MOD - 1);
               //cout<<dn<<endl;
        }
    }
   // cout<<ev<<endl;
    //if(ev==true) cout<<"ev"<<ev<<endl;;
    for (it = mp.begin(); it != mp.end(); it++)
    {
    
        p = (dn * ((it->second) >> (ev==true ? 0 : 1))) % (MOD - 1);
        cout<<p<<" \n";
        ans *= my_pow(it->first, p, MOD);
        ans %= MOD;
      // cout<<p<<endl;
    }
    cout << ans << endl;
    
    return 0;
}
