	#include <bits/stdc++.h>
	using namespace std;
	typedef long long mona;
	typedef long long int sona;
	const int infinite=1e4;
	typedef int priya;
	int main()
	{
		priya t;
		scanf("%d",&t);
		while(t--)
		{
			set <sona> s;
			s.clear();
		sona n,k;
		bool proposal=false;
		scanf("%lld%lld",&n,&k);
		sona c=0;
		for(int i=1;i<=n;i++)
		{
			c++;
			sona x;
			scanf("%lld",&x);
			for(sona i=1;i<=x;i++)
			{
				sona y;
				scanf("%lld",&y);
				s.insert(y);
			}
			if(c!=n && s.size()>=k)
			{
				proposal=true;
			}
			
		}
		if(proposal==true)
		{
			cout<<"some"<<endl;
		}
		else if(proposal==false)
		{
			if(s.size()==k && c==n )
			{
				cout<<"all"<<endl;
			}
			else if(s.size()<k && c==n)
			{
				cout<<"sad"<<endl;
			}
		}
	}
	}
	

