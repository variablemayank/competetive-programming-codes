#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s ;
		while(n>0)
		{
		   int var = n%2;
		   s += to_string(var);
		   n/=2;   
		}
		reverse(s.begin(),s.end());
	//	cout<<s<<endl;
	    int count =0;
		for(int i=0;i<s.size()-2;)
		{
			if(s[i]=='1')
			{
				if(s[i+1]=='0' && s[i+2] =='1')
				{
					count++;
					i+=2;
				}
				else
				i++;
			}
			else
			i++;
		}
		cout<<count;
	}
}
