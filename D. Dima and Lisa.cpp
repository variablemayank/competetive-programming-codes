#include<bits/stdc++.h>
using namespace std;

bool isprime(int no)
{
int sq=sqrt(no);
for(int i=2;i<=sq;i++)
{
    if(no%i==0)
	{
        return false;
}

}
return true;
}
int main()
{
	int t;
	cin>>t;
    if(isprime(t))
    {
    	cout<<"1\n";
    	cout<<t;
    	return 0;
	}
	else
	{
	    cout<<"3\n3 ";
	    t-=3;
	    for(int i=2;i<=t/2;i++)
	    {
	    	if(isprime(i)&&isprime(t-i))
	    	{
	    		cout<<i<<" "<<t-i;
	    		return 0;
			}
		}
	}
}
