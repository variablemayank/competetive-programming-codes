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

const int maxi =100005;
//int arr[maxi];
//int brr[maxi];
//int crr[maxi];



int main()
{
	jadu;
	int t;
	cin>>t;
	while(t--)
	{
        int n,k;
		cin>>n>>k;	
	    
	    vector< vector<bool> > vec;
	    vector<int> length;
	    for(int i=0;i<n;i++)
	    {
	        int var;
	        cin>>var;
	        length.push_back(var);
	        vector<bool> temp(k,false);
	        for(int j=0;j<var;j++)
	        {
		       	int l;
		       	cin>>l;
		       	temp[l-1] = true;
		    }
		    vec.push_back(temp);
	       
		}
		int count =0;
		bool check;
		
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				check =  true;
				
				if(k<=length[i]+length[j])
				{
					for(int p=0;p<k;p++)
					{
						if(!(vec[i][p] || vec[j][p]))
						{
							check = false;
							break;
						}
					}
					if(check) 
					count+=1;
				}
			}
		}
		cout<<count<<endl;
	}
}
