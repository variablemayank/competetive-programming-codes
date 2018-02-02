#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
    cin>>t;
	while(t--)
	{
	    int n,m;
		cin>>n>>m;
		set<int > arr,brr;
		for(int i=0;i<n;i++)
		{
		   int val;
		   cin>>val;
		   arr.insert(val);	
		}	
		set<int> ::iterator it,it1;
		int ans = m;
	    brr.insert(m);
	    for(it=arr.begin();it!=arr.end();it++)
	    {
	    	for(it1 = brr.begin();it1!=brr.end();it1++)
	    	{
	    		int x= *it ^ *it1;
	    		ans = max(ans,x);
	    		brr.insert(x);
			}
		}
		cout<<ans;
	}	
}
