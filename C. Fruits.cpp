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

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> vec;
	vector<int >vec1;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		vec.push_back(t);
		vec1.push_back(t);
	}
	map<string,int > s;
	for(int i=0;i<m;i++)
	{
	      string str;
	      cin>>str;
	      s[str]++;
	}
	sort(vec.begin(),vec.end());
	sort(vec1.rbegin(),vec1.rend());
	vector<int> soln;
	int sum=0;
	for(typeof(s.begin()) it = s.begin(); it!=s.end();it++)
	{
	   soln.push_back(it->second);
	} 
	
	if(s.size()<m)
	{
		int diff = m- s.size();
		//cout<<"diff"<<diff<<endl;
	   int maxs=0;
	   int mins = 0;
	   sort(soln.rbegin(),soln.rend());
	   //for(int i=0;i<soln.size();i++) cout<<soln[i]<<" ";
	    for(int i=0;i<m-diff;i++)
	    {
	   	    mins+= soln[i]* vec[i];
	    }
	    //cout<<mins<<endl;;
	    //sort(soln.begin(),soln.end());
	    for(int i= 0;i<m-diff;i++)
	    {
	   	    maxs+= soln[i]*vec1[i];
	    }
	   cout<<mins<<" "<<maxs<<endl;
	}
	else
	{
		int maxs=0;
		int mins=0;
		 for(int i=0;i<m;i++)
		 { 
		 	mins+= vec[i];
		 }
		 for(int i=0;i<m;i++)
		 {
		 	 maxs+= vec1[i];
		 }
		 cout<<mins<<" "<<maxs<<endl;
	}
}
