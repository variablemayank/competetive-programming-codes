#include<bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin>>s;
	int len = s.length();
	int weight =0;
	for(int i:s)
	{
		int diff=0;
		if(s[i]>=s[i+1])
		{
			diff =s[i]-s[i+1];
			if(diff>10&&s[i]=='z')
			{
				weight = (26- diff)+weight+1;
			}
			else
			{
				weight += diff;
			}
		}
		else
		{
			diff =s[i+1]-s[i];
				if(diff>10)
			{
				weight = (26- diff)+weight;
			}
			else
			{
				weight += diff;
			}
		}
	}
	cout<<weight<<endl;
} 
