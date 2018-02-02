	#include <vector>
	#include <list>
	#include <map>
	#include <set>
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
	
	class StringTransform
	{
	public:
		string isPossible(string, string);
	};
	
	 string StringTransform::isPossible(string s, string t)
	{
		int n=s.size();
		for(int i=n-1;i>=0;i--)
		{
			char soln=t[i];
			bool flag=false;
			for(int j=0;j<i;j++)w
			{
				if(s[j]== soln)
				{
					flag=true;
					break;
				}
			}
			if(flag==false)
			return "Impossible";
			
		}
		 return "Possible";
	}
