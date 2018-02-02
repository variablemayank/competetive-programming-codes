	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	int main()
	{
		
		int t;
		cin>>t;
		while(t--)
		{
			jadu;
			int n;
			cin>>n;
			int arr[n];
			for(int i=0;i<n;i++) cin>>arr[i];
			set<int>first;
			set<int>second;
			set<int> ::iterator it;
		    for(int i= 0;i<n;i++)
		    {
		       set<int> var;
		       var.insert(arr[i]);
		       for(it = first.begin();it!= first.end();it++)
		       {
		       	 var.insert( arr[i] & *it );
		       	 
			   }
			   first = var;
			   for(it = var.begin();it!=var.end();it++)
			   {
			   	second.insert(*it);
			   }
			   
			}
			cout<<second.size()<<endl;
			
		}
		
		return 0;
	}
	
