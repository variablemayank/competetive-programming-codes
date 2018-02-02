#include<bits/stdc++.h>
using namespace std;

vector<int> v(100001);

int main()
{
	int t; cin>>t;
	for(int i=0;i<t;i++) cin>>v[i];
	
	sort(v.begin(),v.begin()+t);
	//for(int i=0;i<t;i++ ) cout<<v[i];
	for(int i=0;i<t-3;i++)
    {
    	int a= v[i],b,c;
    	int l = i+1;
    	int r= t-1;
    	while(l<r)
    	{
    		b=v[l];
    		c= v[r];
    	  if()
    	  {
    	  	cout<<v[a]<<v[b]<<v[c]<<endl;
		  }
		  else 
		   b++;
		   c--;
    		
		}
		
		
	}
}
