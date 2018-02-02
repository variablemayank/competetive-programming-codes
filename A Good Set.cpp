#include<bits/stdc++.h>
using namespace std;

vector<int> ans;
void solve()
{
	bool prime[10005];
	memset(prime,true,sizeof(prime));
	for(int i=2;i<=10000;i++)
	{
		if(prime[i]==true)
		for(int j=i*2;j<=10000;j+=i)
		{
			prime[j] =false;
		}
	}
	prime[2] = false;
	prime[3] = false;
	for(int i=2;i<=10005;i++)
	{
		if(prime[i]==true)
		{
	//		cout<<i<<" ";
			ans.push_back(i);
		}
	}
	
	
}

int main()
{
	solve();
	//cout<<ans.size();
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	for(int i=0;i<n;i++)
    	{
    		cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}
