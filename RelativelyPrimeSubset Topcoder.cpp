	#include <vector>
	#include <list>
	#include <map>
	#include <set>
	#include <queue>
	#include <deque>
	#include <stack>
	#include <bitset>
	#include <algorithm>
	#include <functional>
	#include <numeric>
	#include <utility>
	#include <sstream>
	#include <iostream>
	#include <iomanip>
	#include <cstdio>
	#include <cmath>
	#include <cstdlib>
	#include <ctime>
	
	using namespace std;
	
	
	class RelativelyPrimeSubset 
	{
	    public:
		int findSize(vector <int> S);
	};
	
	    vector<int> primes;
		bool prime(int k)
		{
			bool check = false;
			for(int i=2;i*i<=k;i++)
			{
				if( k % i ==0)
				return false;
				
			}
			return true;
		}
	    const int N = 55,M = (1<<17);
		
		int  dp[N][M];
		
		int RelativelyPrimeSubset::findSize(vector<int> S)
		{
			for(int i=2;i<100;i++)
			if(prime(i)) primes.push_back(i);
			
			int top = (1<<15);
			int n= S.size();
			int ans =0;
			for(int i=0;i<n;i++)
			{
				// Taking first number 
				// and evalauting the results for the next 
				int num =S[i],mask =0;
				for(int j=0;j<15;j++)
				{
					if(num%primes[i]==0)
					{
						// Setting that bit
						mask += (1<<j);
					}
				}
				
				for(int j=0;j<top;j++)
				{
					dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
					// if j is not set then set 
					if((mask &j) ==0)
					{
						dp[i+1][j | mask]  = max(dp[i+1][j | mask],dp[i][j]+1);
						ans = max(dp[i+1][j|mask],ans); 
					}
				}
			}
			cout<<ans<<endl;
			
		}
	
   // int main()
    //{
    //	RelativelyPrimeSubset obj;
    //	obj.findSize({2,3,7,11,4});
	//}
