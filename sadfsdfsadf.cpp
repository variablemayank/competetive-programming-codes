#include<bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	cin>>s;
	int count = 0;
	int value = 0;
	for (int i=0; i<s.size()-1; i++) 
	{
		if (s[i] == 'V') 
		{
			if (s[i+1] == 'K')
			 {
				count++;
				} else {
					if (s[i+1] == 'V' && s[i+2] == 'K') 
					{
					} 
					else
					{
							value++;
					}
				}
		}
		if (s[i] == 'K') 
		{
			if (s[i+1] == 'K') 
			{
				if (s[i+2] == 'K') 
				{
					value++;
				}
			}
		}
	}
	if (s[0] == 'K' && s[1] == 'K') 
	{
		value++;
	}
	if (s[s.size()-2] == 'V' && s[s.size()-1] == 'V') 
	{
		value++;
	}
	if (value > 0) 
	{
		cout<<count+1;
	} else 
	{
		cout<<count;
	}
}
