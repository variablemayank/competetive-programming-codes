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


class StringTransform {
public:
	
	string isPossible(string s, string t) 
	{
	  string soln = s;
	  int len1 = s.size();
	  if(s== t) return "Possible";
	  for(int i =len1;i>=0;i--)
	  {
	  	for(int j=0;j<len1;j++)
	  	{
	  		if(i>j)
	  		s[i] = s[j]; 
		}
		if(s == t)
		{
			cout<<"Possible";
		}
	  }
	  cout<<"Impossible";
}
};
int main()
{
	StringTransform th;
	th.isPossible("abc","aba");
}




