#include<bits/stdc++.h>
using namespace std;

int arr[1000];

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int len = s.size();
		for(int i=0;i<len;i++)
		{
			arr[i] = s[len-i-1]-'0';
			//cout<<arr[i]<<" ";
		}
		vector<int> ans;
		
		for(int div =2;div<=1000;div++)
		{
			bool check = true;
			
			while(check)
		    {
		    	int x=0;
		    	
		    	
		    	for(int i =len-1;i>=0;i--)
		    	{
		    		x = (x*10 +arr[i])%div;
		    	}
		    	
				if(x)
				{
					check =false;
				}
				else
				{
					for(int i= len-1;i>=0;i--)
					{
						x = (x*10 +arr[i]);
						arr[i] = x/div;
						x %= div;
					}
					while(arr[len-1]==0) len --;
					
					ans.push_back(div);
				}

			}
		}
		int add;
		
		if((arr[len-1]!=1)|| (len!=1)) add =1;
		else add= 0;
		
		cout<<ans.size()+add<<endl;
	   	for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
	   	
	   	if(arr[len-1]!=1 ||(len!=1))
	   	{
	   	  for(int  i= len -1;i>=0;i--) cout<<arr[i];
			 cout<<endl;	
	    }
	}
}
