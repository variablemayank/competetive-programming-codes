#include<bits/stdc++.h>
using namespace std;

#define jadu ios_base::sync_with_stdio(false);
#define rep(i,a,b) for(int i = a; i <= b; i++)
#define f first
#define s second
#define lelo(x) scanf("%d",&x);
#define dedo(x) printf("%d",x); 	
#define PB push_back
#define MP make_pair
#define sz(c) (int)c.size()
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
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a);}
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }


const int maxi =1000010;
int arr[maxi];
int brr[maxi];
int n,m,k,l,j;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
		cin>>n;
		for(int i=1;i<=2*n;i++)
		{
			cin>>arr[i];
			brr[i]=arr[i];
		}
		
		sort(arr+1,arr+(2*n)+1);
		sort(brr+1,brr+(2*n)+1);
     	//for(int i=1;i<=2*n;i++) cout<<arr[i]<<" ";
 	    //cout<<endl;
		int k = 2*n;
		int j=1;
		for(int i=1;i<=2*n;i++)
		{
			if(i&1)
			{
				arr[i] = brr[j++];
			}
			else
			{
				arr[i]= brr[k--];
			}
		}
	
	    
		for(int i=1;i<=n;i++)
		{
			brr[i] = max(arr[2*i-1],arr[2*i]);
		}
		
		sort(brr+1,brr+n+1);
	//	for(int i=1;i<=n;i++)
	   // cout<<brr[i]<<" ";
		
	//	cout<<endl;
	//	if(n==1)
	//	{
	//		cout<<brr[n]<<"\n";
	//		for(int i=1;i<=2*n;i++)
	//		{
	//			cout<<arr[i]<<" ";
	//		}
	//		cout<<endl;
			
	//	}
	///	else
	//	{
		cout<<brr[((n/2)+1)]<<endl;
	    for(int i=1;i<=2*n;i++)
	    cout<<arr[i]<<" ";
	    cout<<"\n";
	   // }
	}
	return 0;
}
