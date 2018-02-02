#include<stdio.h>
int fun(int s)
{
	if(s==0)
	return 0;
	else
	return s+fun(s-1);
}
int main()
{
	int i,j,n,ans;
	scanf("%d",&n);
	 ans = fun(n);
	printf("%d\n",ans);
}
