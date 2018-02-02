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

const int maxi =3001;
//int arr[maxi];
//int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;
string s[110];
string t[110];
int main()
{
		 cin>>n;
		 for(int i=0;i<n;i++) cin>>s[i];
		 
		 for(int i=0;i<2*n-1;i++)
		 {
		 	for(int j=0;j<2*n-1;j++)
		 	{
		 	  t[i]+= 'x';	
			}
		 }
		 t[n-1][n-1] ='o';
		 
		 for(int i=0;i<n;i++)
		 {
		 	for(int j=0;j<n;j++)
		 	{
			 	    if(s[i][j]=='o')
				    { 
				   	    for(int k=0;k<n;k++)
				   	    {
				   	         for(int l=0;l<n;l++)
							 {
							   if(s[k][l]=='.')
							   t[k-i+(n-1)][l-j+(n-1)] ='.';	
							 }	
						}
					}	
			}
		 }
		 
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(s[i][j]=='x')
				{
					bool found = false;
					for(int k=0;k<n;k++)
					{
						for(int l=0;l<n;l++)
						{
							if(s[k][l]=='o' && t[i-k+(n-1)][j-l+(n-1)]=='x')
							found = true;
						}
					}
					if(found==false)
					{
						return cout<<"NO\n",0;
					}
				}
			}
		}
		cout<<"YES\n";
		for(int i=0;i<2*n-1;i++)
		{
			for(int j=0;j<2*n-1;j++)
			{
				cout<<t[i][j];
			}
			cout<<endl;
		}
		return 0;
}
