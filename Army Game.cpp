#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	float val = n*m;
	if(n==2 && m==3)
	{
			cout<<ceil(val/4);
			return 0;
	}
	 if(n==3 && m==2)
	{
		cout<<ceil(val/4);
		return 0;
	}
	if(n==3 && m==3)
	{
		cout<<ceil(val/4)+1;
		return 0;
	}
	if((n==1 && m==2) ||(n==2&& m==1)||(n==1 &&m==1)) 
	{
		cout<<ceil(val/4);
		return 0;
	}
	if((n==m)&&(n%2==0)) cout<<ceil(val/4);
	else
	{
		
		int cal = ceil(val/4) ;
		cal +=1;
		cout<<cal;
		return 0;
	}

	return 0;
	//bye bye
}
