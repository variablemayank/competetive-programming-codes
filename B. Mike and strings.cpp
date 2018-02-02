 	#include<bits/stdc++.h>
 	using namespace std;
 	
 	int main()
 	{
 	   int n;
	   cin>>n;
	   
	   vector<string> vec;
	   for(int i=0;i<n;i++)
	   {
	   	string s;
	   	cin>>s;
	   	vec.push_back(s);
	   }
	   
	   
	   string s;
	   int ans =INT_MAX;
	    for(int i=0;i<n;i++)
	    {
            s  = vec[i];
            int y= 0;
            for(int j=0;j<n;j++)
            {
            	if(s!=vec[j])
            	{
            		string x = vec[j];
            		for(int k=0;k<vec[j].size();k++)
            		{
            			if(x!=s)
            			{
            				y++;
            				x+= x[0];
            				x.erase(0,1);
						}
						else break;
					}
					if(s!=x)
					{
						return cout<<"-1",0;
					}
				}
			}
			ans = min(ans,y);
		}	
		cout<<ans;
	}
