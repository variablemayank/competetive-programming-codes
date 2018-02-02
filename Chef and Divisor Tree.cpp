	#include<bits/stdc++.h>
	using namespace std;
	
	vector<long long > div;
	vector<long long > div1;
	void generate(long long n)
	{
		for(int i=1 ;i*i<=n;i++)
		{
			if(n%i==0)
		    {
		    	if(n/i == i)
			    {
			    	div.push_back(i);
				}
				else 
				{
					div.push_back(i);
					div.push_back(n/i);
				}
			}
		}
	}
	void generate1(long long n)
	{
	    for(int i=1 ;i*i<=n;i++)
		{
			if(n%i==0)
		    {
		    	if(n/i == i)
			    {
			    	div1.push_back(i);
				}
				else 
				{
					div1.push_back(i);
					div1.push_back(n/i);
				}
			}
		}
			
	}
	int main()
	{
       long long n,m;
       cin>>n>>m;
       generate(n);
       generate(m);
       sort(div.begin(),div.end());
       sort(div1.begin(),div1.end());
       for()
	}
