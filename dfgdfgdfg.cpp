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


   class StringTransform
    {
    	
   public:
	string isPossible(string s, string t)
    {
	   int len = s.size();
	   bool flag = false;
	   for(int i=0 ; i<=len ; i++)
	   {
	     for(int j=0;j<=i;j++)
	     {
	           if(s[i] == t[j])
	           {
	             flag = true; 
	             break;
	           }
	     }
	     if(flag== false) return "Impossible";
	   }
	   if(flag)
	   return "Possible";
	   
    }
};

