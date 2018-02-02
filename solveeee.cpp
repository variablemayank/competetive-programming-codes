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

 
int main() 
{
	//jadu;
	
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int arr[26];
		
		memset(arr,0,sizeof(arr));
	    string str;
	    cin>>str;
	    sort(str.begin(),str.end());
	    for(int i=0;i<str.length();i++)
	    {
	        if((str[i]=='6')||(str[i]=='7')||(str[i]=='8')||(str[i]=='9'))
	        {
	            for(int j=0;j<str.length();j++)
	            {
	                int x=(str[i]-48)*10 + (str[j]-48);
	                if(j!=i)
	                {
	                if(x>=65 && x<=90) 
	                arr[x-65]++;
	                }
	            }
	        }
	    }
	    for(int i=0;i<26;i++)
	    {
	        if(arr[i]>0)
	        {
	            char ch=i+65;
	        printf("%c",ch);
	        }
	    }
	    printf("\n");
 
	}
	return 0;
}
