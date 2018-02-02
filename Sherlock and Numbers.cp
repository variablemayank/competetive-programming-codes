#include<iostream>
#include<algorithm>
using namespace std;
int A[100001];
int get(int n,int k){
	int i=0;
	while(i<k && A[i]<=n) i++;
	return n-i;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,p;
		scanf("%d%d%d",&n,&k,&p);
		for(int i=0;i<k;i++)
		{
			int value;
			scanf("%d",&A[i]);
		}
		sort(A,A+k);
		int l=0,r=n,mid;
		if(get(r,k)<p)
		{
			printf("-1\n");
			continue;
		}
		while(r-l>1)
		{
			mid=(r+l)/2;
			int q=get(mid,k);
			if(q<p) l=mid;
			else r=mid;
		}
		printf("%d\n",l+1);
		
	}
}
