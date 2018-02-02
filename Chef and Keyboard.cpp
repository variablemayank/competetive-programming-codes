#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;scanf("%d",&t);
	while(t--)
	{
		int l,r,c;
	     scanf("%d%d%d",&l,&r,&c);
		//if(l==r) {
		//cout<<"0\n";}
	
			long long count =0;
			for(int i=1;i<=sqrt(c);i++)
			{
				if(c%i==0)
				{
					 if(i*i ==c)
					 {
					 	if(i<=l && i<=r) count++;
					 }
					 else
					 {
					 	int d= c/i;
					 	if(i<=l && d<=r ) count++;
					 	if(i<=r && d<=l) count++;
					 }
				}
		    }
			printf("%d\n",count);
		
	}
} 
