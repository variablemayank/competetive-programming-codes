#include<bits/stdc++.h>
#include <algorithm>
#include <bitset>
#include <deque>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;
int getinput(int i,int j)
{
	printf("? %d %d\n",i,j);
	fflush(stdout);
	int input;
	scanf("%d",&input);
	return input;
}
int main()
{
	int sum[5005];
	int ans[5005];
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		sum[i]  = getinput(1,i);
	}
	int x = getinput(2,3);
    ans[2] = (sum[2]-sum[3]+x)/2;
    ans[3]  =(x- ans[2]);
    ans[1] = (sum[2]-ans[2]);
    for(int i=4;i<=n;i++)
    {
    	ans[i] = sum[i]-ans[1];
	}
	cout<<"! ";
	for(int i=1;i<=n;i++)
	{ 
	  cout<<ans[i]<<" ";	
	}
	cout<<endl;
	fflush(stdout);
	return 0;
}
