#include<bits/stdc++.h>
using namespace std;
	
int mat[105][105];
int n;
int ans;
bool mark[105];
set<int> diff;
bool check()
{
	if(ans==0)
	return false;
	bool next=false;
	for(int i=1;i<=n;i++)
	{
	  diff.clear();
  for(int j=1;j<=n;j++)
		if(mat[i][j]) diff.insert(mat[i][j]);
	   if(diff.size()<2&&!mark[i])
				{
					cout<<i<<endl;
					next=true;
					for(int j=1;j<=n;j++)
						mat[j][i]=0;
					ans--;
					mark[i]=1;
				}
		}
		return next;
	}
	 
int main()
{
		std::ios::sync_with_stdio(false);cin.tie(0);
		int T;
		cin>>T;
		while(T--)
		{
			
			cin>>n;
			memset(mark,0,sizeof(mark));
			for(int i=1;i<=n;i++)
				for(int j=1;j<=n;j++)
					cin>>mat[i][j];
			ans=n;
			while(check());
			cout<<ans<<endl;
		}
		
		
		return 0;
}  
