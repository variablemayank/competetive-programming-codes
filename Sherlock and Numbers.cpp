#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   
	   int n,k,p;
	   list<long long > s;
	   scanf("%d%d%d",&n,&k,&p);
	   for(int i=1;i<=n;i++) s.push_back(i);
	   for(int i=0;i<k;i++)
	   {
	   	 int del;
	   	 scanf("%d",&del);
	   	 s.remove(del);
	   }
	   int count=0;
	   for(list<long long >::iterator it=s.begin();it!=s.end();it++)
	   {
	   	 count++;
	   	  if(count==p) printf("%lld\n",*it);
	   	 if(s.size()<p) 
			{
			printf("-1\n");
			break;
		    }
	   }
	   s.clear();
	   
	   
	}
}
