#include<iostream>
using namespace std;
int main()
{
	int t,q=0;
	int A[100];
	cin>>t;
	while(t--)
	{
		int r,x,k=0;
		cin>>r;
		for(int i=0;i<r;i++)
		{
			int a,b;
		cin>>a>>b;
		A[q]=a;
		A[q+1]=b;
		q=q+2;
		
	    }
		for(int i=0;i<r;i++)
		{
			if(A[i]!=A[i+1])
			{
				k++;
			}
			if(A[i+1]!=A[i+2])
			{
				k++;
			}
			
	    }
	     
	     cout<<k-1<<endl;
	}
	return 0;
}
