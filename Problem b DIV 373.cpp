#include<stdio.h>

int main()
{
	int t; int arr[200000],i;
    scanf("%d",&t);
    while(t--)
    {
	  int n; scanf("%d",&n);
    for( i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		{
			arr[i+1]= arr[i+1]-1;
		}
	}
	if(i==n-1 && arr[i]%2==1) printf("NO\n");
	else printf("YES\n");
    }
}
