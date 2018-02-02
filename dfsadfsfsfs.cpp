	#include<bits/stdc++.h>
	
	using namespace std;
	
	int main()
	{
	pair<int,int> p[9];
	int k=1;
	for(int i=1;i<=3;i++)
	{
	  for(int j=1;j<=3;j++)
	  {
	  	p[k].first = i-1;
	  	p[k].second  =j-1;
	  	k++;
	  }
	}
	for(int i=1;i<=9;i++)
	{
		cout<<p[i].first<<" "<<p[i].second<<endl;
	}
	}
