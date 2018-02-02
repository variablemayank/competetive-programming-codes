#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int   A[1000][300],B[1000];
		 int n,m,loc=0;
		cin>>n>>m;
		while(n--)
		{
		
		for(int  i=0;i<m;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>A[i][j];
			}
		}
	    //int k=0;
	   for(int i=0;i<m;i++)
      {
          B[i]=1000*(1-A[i][0]/100.0)*(1-A[i][1]/100.0)*(1-A[i][2]/100.0);
     } 
		long long  best=1000;
	   for(int i=0;i<m;i++)
	   {
	   	if(B[i]<best)
	   	{
	   		best=B[i];
	   		loc=i;
		}
		
	   }
	   loc=loc+1;
	   cout<<loc<<" ";
}   
cout<<endl;
	}
	return 0;
}
		
