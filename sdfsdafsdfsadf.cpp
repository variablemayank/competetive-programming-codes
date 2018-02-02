#include<bits/stdc++.h>
using namespace std;

int main()
{
	int s,v1,v2,t1,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	int var1 = s*v1 +t1*2;
	int var2=  s*v2 +t2*2;
	
	if(var1==var2)
	{
		return cout<<"Friendship",0;
	}
	else if(var1<var2)
	{
		return cout<<"First",0;
		
	}
	else
	{
		return cout<<"Second",0;
	}
	
}

