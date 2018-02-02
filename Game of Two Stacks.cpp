#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
	int n,m,k;
	cin>>n>>m>>k;
	stack<int> s1;
	stack<int> s2;
    for(int i =0;i<n;i++)
    {
    	int val;
    	cin>>val;
    	s1.push(val);
	}
	for(int i=0;i<m; i++)
	{
		int val;
		cin>>val;
		s2.push(val);
	}
	long long sum =0,count =0 ;
	while(!s1.empty() && !s2.empty() || sum< k)
	{
	   if(s1.top() > s2.top() && sum <k ){
	   	 sum += s2.top();
	   	 s2.pop();
	   	 count++;
	   }
	   if(s1.empty() || s2.empty())
	   {
	   	   if(s1.empty())
	   	   {
	   	   	 sum += s2.top();
	   	   	 s2.pop();
	   	   	 count++;
	   	   	 
			}
			if(s2.empty())
			{
			  sum+= s1.top();
			  s1.pop();
			  count++;
			}
	   }
	   else 
	   {
	   	  if(sum< k)
	   	  {
	   	    sum += s1.top();
	   	    s1.pop();
	   	    count++;
		  }
	   }
	}
	cout<<count<<endl;
    }
}

