	#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		bool dp[10][10];
		memset(dp,false,sizeof(dp));
	    string s,s2;
	    cin>>s;
	    cin>>s2;
	    int jr = s[0]-97;
	    int ir = s[1] -'0';
	    int jk = s2[0] -97;
	    int ik = s2[1] -'0';
	 
	        ir -=1;
	        ik -=1;
	        dp[ir][jr]=true;
			dp[ik][jk]=true;
			for(int i=0;i<8;i++)
			{
				dp[ir][i]=true;
			}
			for(int i=0;i<8;i++)
			{
				dp[i][jr]=true;
			}
			dp[ir+2][jr+1]=true;
			dp[ir+2][jr-1]=true;
			dp[ir-2][jr+1]=true;
			dp[ir-2][jr-1]=true;
			dp[ir-1][jr-2]=true;
			dp[ir-1][jr+2]=true;
			dp[ir+1][jr-2]=true;
			dp[ir+1][jr+2]=true;
			
			
			dp[ik+2][jk+1]=true;
			dp[ik+2][jk-1]=true;
			dp[ik-2][jk+1]=true;
			dp[ik-2][jk-1]=true;
			dp[ik-1][jk-2]=true;
			dp[ik-1][jk+2]=true;
			dp[ik+1][jk-2]=true;
			dp[ik+1][jk+2]=true;
			int c=0;
			for(int i=0;i<8;i++)
			{
				for(int j=0;j<8;j++)
				{
					if(!dp[i][j])
					{
						c++;
					}
				}
			}
	        cout<<c;
		}
		
