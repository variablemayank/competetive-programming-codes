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


class SquareMaking {
public:
	int getMinimalPrice(int a, int b, int c, int d) 
	{
	   int arr[4];
	   arr[0] =a;
	   arr[1]  =b;
	   arr[2]= c;
	   arr[3] = d;
	   sort(arr,arr+4);
	   int sum1=0,sum=0;
	   for(int i=0;i<4;i++)
	   {
	   	sum+= abs(arr[0]-arr[i]);
	   }
	   for(int i=0;i<4;i++)
	   {
	   	sum1+= abs(arr[3]-arr[i]);
	   }
	   cout<<min(sum,sum1);
	}
};

int main()
{
   SquareMaking kl;
   kl.getMinimalPrice(5,6,5,5);	
}
