#include<iostream>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
	long 	int c,m;
	cin>>m;
	
	m=m-1;
for(c=2;m<=c-2;c++)
{
	if(m%c==0)
	{
		cout<<"NO\n";
	}


}
if(c==m)
cout<<"YES\n";
}
return 0;
}



