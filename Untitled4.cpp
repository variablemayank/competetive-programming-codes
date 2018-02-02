#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	unordered_set<string > solve;
	for(int i=0;i<n;i++)
	{
		string s ="";
		 int var;
		int pass=0;
		int root;
		for(int j=0;j<k;j++)
		{
		   
		    cin>>var;
		    if(j==0)
		    {
			
		    pass = var;
		    root = var;
		    }
		    else
		    {
		       if(var>pass )
		       {
		       	//if(var<root)
		       	//{
		       	//	s+= 'p';
				//}
				//else
		       	s+= 'r';
			   }
			   if(var<pass)
			   {
			   //	if(var<root)
			   	//{
			   	  //s+= 'q';	
				//}
				//else
			   	s+= 'l';
			   }
			   pass = var;
			}
			sort(s.begin(),s.end());
		}
	
		solve.insert(s);
	}
	
	cout<<solve.size();
}
