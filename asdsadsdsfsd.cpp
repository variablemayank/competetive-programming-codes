#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int count =0;
	bool flag =true;
	for(int i=0;i<=100;i++)
	{
	
		int x= b + (i*a);
       for(int  j=0;j<=100;j++)
       {
       	   int y= d+(j*c);
       	 
		   if(x==y)
		   {
		  cout<<x<<endl;
		  return 0;
	        }    
	        else
	          count++;
        
     	}
     	if(flag== false) break;
    }
    cout<<"-1";
}
