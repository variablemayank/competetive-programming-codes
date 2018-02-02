#include<bits/stdc++.h>
using namespace std;
	
#define jadu ios_base::sync_with_stdio(false);
#define rep(i,b) for (ll i =0; i <b; i++)
#define f first
#define s second
#define lelo(x) scanf("%d",&x);
#define dedo(x) prllf("%d",x); 	
#define PB push_back
#define MP make_pair
#define sz(c)     (ll)c.size()

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
const ll mod = 1000000007;
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }

const ll maxi =1000005;
//ll arr[maxi];
//ll brr[maxi];
//ll crr[maxi];
ll n,m,k,l,j;
string s[maxi];
bool canWin(string cur)
{
	bool ret = 0;
	rep(i, 26)
	{
		string temp = cur + char('a'+i);
	//	cout<<temp<<endl;
		int st = lower_bound(s, s+n, temp) - s;
		if(st == n)
			continue;
		if(s[st].substr(0, sz(temp)) != temp)
			continue;
		if(!canWin(temp))
			ret = 1;
	}
	return ret;
}

bool canLose(string cur)
{
	bool ret = 0;
	bool flag = 0;
	rep(i, 26)
	{
		string temp = cur + char('a'+i);
	//	cout<<temp<<endl;
		int st = lower_bound(s, s+n,temp) - s;
		if(st == n)
			continue;
		if(s[st].substr(0, sz(temp)) != temp)
			continue;
		flag = true;
		if(!canLose(temp))
			ret = 1;
	}
	if(flag==0)
		ret = 1;
	return ret;
}

int main()
{
     cin>>n>>m;
    
     for(int i=0;i<n;i++)
     {
     	 cin>>s[i];
	 }
	 sort(s,s+n);

     if(canWin(""))
     {
     	if(canLose(""))
     	{
		 
     	cout<<"First";
        }
        else
		{
		if(m&1)
		{
		 		cout<<"First";
		}
		else
		{
				cout<<"Second";
		}
	    }
	  }
	  else
	  {
	  	cout<<"Second";
	  }
	 
	 return 0; 
	  
}

