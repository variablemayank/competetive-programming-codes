#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	long long n,i;
	cin>>n;
	cin>>s;
	int h=0,a=0,c=0,k=0,e=0,r=0,t=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='h')
		{
			h++;
		}
		else if(s[i]=='a')
		{
			a++;
		}
		else if(s[i]=='c')
		{
			c++;
		}
		else if(s[i]=='k')
		{
			k++;
		}
		else if(s[i]=='e')
		{
			e++;
		}
		else if(s[i]=='r')
		{
			r++;
		}
		else if(s[i]=='t')
		{
			t++;
		}
	
		}	
		long long H=h/2;
		long long A=a/2;
		long long E=e/2;
		long long R=r/2;
		long long sum=(H+A+c+k+E+R+t);
		cout<<sum<<endl;
		cout<<sum/11;
		
		
	
}
