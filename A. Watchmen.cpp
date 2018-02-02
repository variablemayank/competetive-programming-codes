	#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		int t;
		cin>>t;
		//set<pair<int, int > > s;
		
		map<int,int> X_axis;
		map<int,int> Y_axis;
		map<pair<int,int >,int > XY_axis; 
		for(int i=0;i<t;i++)
		{
		  int a,b;
		  cin>>a>>b;
		  X_axis[a]++;
		  Y_axis[b]++;
		  XY_axis[{a,b}]++;
		}
		
	    long long int ans =0;
	    
	    for(map<int,int> ::iterator it = X_axis.begin();it!=X_axis.end();it++)
	    {
	    	if(it->second>0) 
	    	{
	    	    long long  var = it->second;
	    	    ans += (var*(var-1))/2;
			}
		}
	    for(map<int,int> ::iterator it = Y_axis.begin();it!=Y_axis.end();it++)
	    {
	    	if(it->second>0) 
	    	{
	    	    long long  var = it->second;
	    	    ans += (var*(var-1))/2;
			}
		}
		for(map<pair<int,int>,int> ::iterator it = XY_axis.begin();it!=XY_axis.end();it++)
	    {
	    
	    	    long long  var = it->second;
	    	    ans -= (var*(var-1))/2;
		
	    }
		cout<<ans<<endl;
	}
