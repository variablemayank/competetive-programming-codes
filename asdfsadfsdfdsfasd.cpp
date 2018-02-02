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
 
 
class ConvertibleStrings {
public:
  int leastRemovals(string A, string B) {
    vector<char> perm;
    int i;
    for(i=0;i<9;i++)
      perm.push_back('A'+i);
    
    int minimum = A.length()+1;
    do
    {
      int count = 0;
      for(i=0;i<A.length();i++)
      {
        if(A[i]!=perm[B[i]-'A'])
          count++;
      
      }
      minimum = min(minimum,count);
    
    
    }
    while(next_permutation(perm.begin(),perm.end()));
    
    return minimum;
    
  }
};

int main()
{
	string X, Y;
	cin>>X>>Y;
	ConvertibleStrings obj;
	int var = obj.leastRemovals(X,Y);
	cout<<var;
}
 
