#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		string s;
		cin>>s;
		//long long count =0;
		long long signed  int  sum=0;
			long long int   count =0;
		
		for(int i=0;i<s.length();i++)
		{
		
			if(s[i]=='a')
			{
				for(int j=i+1;j<s.length();j++)
				{
					if(s[j]=='b') count++;
				}
			}
		
		
		}
		cout<<count<<endl;
		for(int i=b;i>=1;i--)
		{
			sum+= (count*i);
		}
	    cout<<sum<<endl;
		
	}
}

