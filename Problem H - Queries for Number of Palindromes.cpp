#include<bits/stdc++.h>
using namespace std;



#define maxn 5050
int n;
bool ispal[maxn][maxn];
int dp[maxn][maxn];
int sum[maxn][maxn];
string s;

int solpalan(int left,int right)
{
	int &res = sum[left][right];
	if(res==-1)
	{
		res =0;
		int diff = right-left+1;
		if(diff<=2)
		{
			if(s[left]==s[right])
			res =1;
			else
			res=0;
		}
		else
		{
			if(s[left]==s[right])
			res=	solpalan(left+1,right-1);
			else 
				res =0;
		}
	}
	return res;
}

int getsum(int left,int right)
{
	if(left==0) return sum[right][right];
    return sum[right][right]- sum[left-1][right];
}
void compute()
{
	memset(sum,-1,sizeof(ispal));
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			ispal[i][j] = solpalan(i,j);
		}
	}
	
/*	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			cout<<ispal[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	*/
	
	memset(sum,0,sizeof(sum));

	for(int j=0;j<n;j++)
	{
		int count =0;
		if(ispal[0][j])
		 count=1;
		sum[0][j] = count;
		for(int i=1;i<=j;i++)
		{
			if(ispal[i][j]) count++;
			  sum[i][j] = count;
		}
	}

/*	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	*/
	memset(dp,0,sizeof(dp));
	for(int i=0;i<n;i++) dp[i][i] =1;
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			dp[i][j] = dp[i][j-1] + getsum(i,j);
		}
	}
	
/*	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	*/
}
int main()
{
	
	cin>>s;
	n= s.length();
	compute();
	int query;
	cin>>query;
	while(query--)
	{
		int left,right;
		cin>>left>>right;
		left--,right--;
		
		cout<<dp[left][right]<<endl;
	}
}
