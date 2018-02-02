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
	
	
	class PingPongQueue {
	public:
		vector <int> whoPlaysNext(vector <int> skills, int N, int K) 
		{
			vector<int> ans = skills;
		   int n= skills.size();
		   int soln =0;
		   while(K!=0)
		   {
		   	 int winner =0;
		      for(int i=0;i<n;i++)
		      {
		          if(ans[i]>ans[i+1])
				  {
				     winner = i;	
				  }	
				  else 
				  winner =i+1;
		      }K--;
		      soln  = winner;
		   }
		   cout<<ans[soln]<<" "<<ans[soln+1]<<endl;
		     
	}
};
	
	int main()
	{
	PingPongQueue obj;
	
	obj.whoPlaysNext({1,2,3},2,2);
	}
