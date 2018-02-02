#include<bits/stdc++.h>
using namespace std;

int main()
{
    int set[] =  {3,34,4,12,5,2};
    int sum = 9;
    int n= 6;
    bool subset[sum+1][n+1];
   
   for(int i=0;i<=n;i++)
   subset[0][i] = true;
   
    for(int i=1;i<=n;i++)
    {
   	 subset[i][0] =  false;
    }
   
    for(int cur_sum=1;cur_sum<=sum;cur_sum++)
    { 
	   	for(int j=1;j<=n;j++)
	   	{
	   	  subset[cur_sum][j] = subset[cur_sum][j-1];
		  if(cur_sum>=set[j-1])
		  {
		    	subset[cur_sum][j] = subset[cur_sum][j] ||
		    	                              subset[cur_sum-set[j-1]][j-1];
		  }	
		}
    }
    for(int i=0;i<=sum;i++)
    {
	   	for(int j=0;j<=n;j++)
	   	printf("%4d", subset[i][j]);
	   	printf("\n");
    }
    cout<<subset[sum][n];
    return 0;
}
