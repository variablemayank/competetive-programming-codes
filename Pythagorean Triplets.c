#include<stdio.h>
#define ll long long 
int main()
{
	int t,A[10000]={0},i,j;
	scanf("%d",&t);
	while(t--)
	{
		int n,counter=0;
		scanf("%d",&n);
	     for(i=0;i<n;i++)
	     {
	      A[i]=i+1;
		 }
		 for(j=0;j<n;j++)
		 {
		 	 if(A[j]*A[j]==A[j+1]*A[j+1]+A[j+2]*A[j+2]) 
		 	 {
		 	 	counter++;
			  }
		 }
		 printf("%d",counter);
		 
		 
	}
	return 0;
}
