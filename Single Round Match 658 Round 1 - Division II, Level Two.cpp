	#include<bits/stdc++.h>
	
	using namespace std;
	
	
	class MutaliskEasy 
	{
	    public:
	  
		int minimalAttacks(vector <int> x)
		{
			int dp[61][61][61];
			memset(dp,-1,sizeof(dp));
			dp[0][0][0] =0;
			
			for(int total =1;total<=180;total++)
			{
				for(int i=0;i<=60 &&i<=total;i++)
				{
					for(int j=max(0,total-i-60);j<=60 &&i+j<=total;j++)
					{
						int k = total   -(i+j);
						int &res = dp[i][j][k];
						
						res = 10000000;
						
						vector<int> ans = {i,j,k};
						
						sort(ans.begin(),ans.end());
					    do{
					    	int ni = max(0,ans[0]-9);
					    	int nj = max(0,ans[1]-3);
					    	int nk = max(0,ans[2]-1);
					    	res = min(res,1+dp[ni][nj][nk]);
						}
						while(next_permutation(ans.begin(),ans.end()));
					}
					
				}
			}
			while(x.size()<3)
			{
				x.push_back(0);
			}
			int res = dp[x[0]][x[1]][x[2]];
			cout<<res;
		}
	};
	int main()
	{
		MutaliskEasy obj;
		vector<int> v;
		v.push_back(60);
		cout<<obj.minimalAttacks({55,60,53});
		
	}
	

