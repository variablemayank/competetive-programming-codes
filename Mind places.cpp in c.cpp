#include<stdio.h>
#define MAX 1001
int main()
{
	int row,col,i,j;
	int Array[MAX][MAX];
	scanf("%d%d",&row,&col);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	int searching;
	scanf("%d",&searching);
	while(t-->0)
	{
		int key;
		scanf("%d"&key);
		int start=0,end=col-1;
		while(start<n && end>=0)
		{
			if(A[i][j]==key)
			{
				printf("%d %d\n",i,j);
				return;
			}
			
			if(A[i][j]>key)
			end--;
			
			else
			start++;
			
		}
		cout<<"-1 -1\n";
	}
}
