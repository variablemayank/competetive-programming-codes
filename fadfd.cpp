#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	while(t--)
	{
		
		int n; scanf("%d",&n);
		set<int> s[n+1];
		
		long long  arr[n+1];
		for(int i=0;i<n;i++)
		{
	        int val
	        scanf("%d",&val);
	        s.insert(val);
		}
	    for(int i=0;i<n;i++)
	    {
	    	cout<<s[i];
		}
	}
}
