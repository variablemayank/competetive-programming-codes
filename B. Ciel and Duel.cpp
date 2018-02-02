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
#define all(x)  x.begin(),x.end()
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

const int maxi =100005;
//int arr[maxi];
//int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;

vector<int> atk;
vector<int> def;
vector<int> power;

int main()
{
	jadu;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
    	string s;
        cin>>s;
        if(s[0] == 'A')
        {
        	int x;
        	cin>>x;
        	atk.push_back(x);
		}
		else
		{
			int x;
			cin>>x;
			def.push_back(x);
		}
        
	}
	
	for(int i=0;i<m;i++)
	{
	   int x;
	   cin>>x;
	   power.push_back(x);
	}  
	
	int ans1 =0;
	int ans2 =0;
	sort(atk.begin(),atk.end(),greater<int>());
	sort(def.begin(),def.end(),greater<int>());
	sort(power.begin(),power.end(),greater<int>());	

	for(int k=0;k<=atk.size();k++)
	{
		if(k<=power.size())
		{
			int ans =0;
		    bool flag = true;
		    
		    for(int i=0;i<k;i++)
		    {
		    	if(power[i]>=atk[atk.size()-k+i])
		    	{
		    ///	trace2(k,atk.size()-k+i);
		    	  ans+= power[i] - atk[atk.size()-k+i];
				}
				else flag =false;
			}
			
			if(flag==false)
			ans =0;
			
			ans1 =max(ans,ans1);
		}
	}
//	trace1(ans1);
	
	if(power.size() >= (atk.size()+def.size()))
	{
		bool flag = true;
		bool mark[10000];
		memset(mark,false,sizeof(mark));
		int k = def.size()-1;
		int ans =0;
		int count =0;
		for(int i=power.size()-1;i>=0 && k>=0;i--)
		{
			if(power[i]>def[k])
			{
				k--;
				mark[i] = true;
			}
		}
		if(k!=-1) flag = false;
		
		for(int i=0;i<power.size();i++)
		{
			if(mark[i]==false)
			{
				if((count >= atk.size() )|| (power[i]>= atk[count]))
				ans += power[i]  - (count>=atk.size()?0:atk[count]),count++;
				else flag =false;
			}
		}
		if(flag)
		ans2 = ans;
		
		
	}
//	trace1(ans2);
	cout<<max(ans1,ans2);
	return 0;
}
