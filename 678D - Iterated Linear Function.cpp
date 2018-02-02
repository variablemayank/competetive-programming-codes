#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
typedef long long ll;

const int N = 2;
struct matrix
{
	int m[N][N];
	matrix()
	{
		memset(m,0,sizeof(m));
	}
	matrix operator * (matrix b)
	{
		matrix c = matrix();
		
		for(int i=0;i<N;i++)
		{
			for(int k=0;k<N;k++)
			{
				for(int j=0;j<N;j++)
				{
					c.m[i][j] = (c.m[i][j]+1ll* m[i][k]*b.m[k][j])%mod;
					
				}
			}
		}
		return c;
	}
	
};
	matrix modPow(matrix m,ll n)
	{
		if(n==1) return m;
		matrix half = modPow(m,n/2);
		matrix out =half * half;
		if(n&1) out = out *m;
		return out;
	}
 
int main()
{
	ios_base::sync_with_stdio(false);
	matrix base;
	cin>>base.m[0][0];
	ll B;
	cin>>B;
	base.m[0][1] =1;
	base.m[1][0] =0; // m{0,1};
	base.m[1][1] =1;
	ll n,x;
	cin>>n>>x;
	matrix res = modPow(base,n);
	ll ans  = res.m[0][0] * x+ res.m[0][1] *B;
//	cout<<res.m[0][0]<<" ";
//	cout<<res.m[0][1];
	ans %= mod;
	cout<<ans<<endl;
	return 0;
	
}
