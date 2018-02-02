#include<iostream>
using namespace std;
int pass(int a,int b,int p,int q)
{
int val;
val=(a-p)*(a-p)+(b-q)*(b-q);
return val;
}
int main()
{
	int A[1000],B[1000],C[1000];
	int count=0,final=0,n,i,j,l,nn;
	cin>>n;
	nn=n;
	for(int k=0;k<nn;k++) {cin>>A[k];
	cin>>B[k];
	cin>>C[k];}
    for(i=1;i<=1000;i++)
    {
    	for(j=1;j<=1000;j++)
    	{
    		for(l=0;l<nn;l++)
    		{
    		 if(pass(i,j,A[l],B[l])<=C[l]*C[l]) {count++;}
			}
			if(count>=2 && nn>=2) {final++;}
			count=0;
		}
		
	}
	cout<<final<<"\n";
	
	return 0;
}
