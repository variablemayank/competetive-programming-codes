#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,q;
	cin>>n>>q;
	int arr[1000006];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
    int cum[1000006];
    memset(cum,0,sizeof(cum));
    
    cum[1] = arr[1];
    for(int i=2;i<=n;i++)
    {
    	cum[i] = cum[i-1] +arr[i];
	}
	
	while(q--)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		int var = (cum[r]- cum[l])/(r-l+1);
		printf("%d\n",var);
	}
	
	return 0;
	
}
