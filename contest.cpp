#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
   char S[]="a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z";
   char K[]="A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,V,W,X,Y,Z";
   char str1[10000];
   char str[10000];
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	while(n--)
   	{
   		int k,l,p,q;
   		cin.getline(str,10000);
   		p=strlen(str);
   		for(int i=0;i<p;i++)
   		{
   		  cin>>str1[i];
		}
		for(int i=0;i<p;i++)
		{
		q=str[i];
		cout<<S[i+q];
		   
		}
   		
   		
   		
	}
	   
   }
}
