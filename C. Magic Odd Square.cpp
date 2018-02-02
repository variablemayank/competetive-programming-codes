#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     int arr[n][n];
     memset(arr,0,sizeof(arr));
     int i=n/2;
     int  j= n-1;
     for(int num=1;num<=n*n;)
     {
     	  if(i== -1 && j == n)
		  {
		  	 i=0;
		  	 j=n-2;
		  }
		  else
		  {
		  	  if(j==n)
		  	  j=0;
		  	  if(i<0)
		  	   i=n-1;
		  }
		  if(arr[i][j])
		  {
		  	  i++;
		  	  j=j-2;
		  	  continue;
		  }
		  else
		  {
		  
		  arr[i][j] = num++;
		  i--;j++;
	      }
	  }
	  for(int i=0;i<n;i++)
	  {
	  	for(int j=0;j<n;j++)
	  	{
	  	    cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	  }
	  return 0;
}
