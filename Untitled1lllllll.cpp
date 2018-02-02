#include <bits/stdc++.h>
using namespace std;
 
const long long int MAX=9e9;
 
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		long long int res=1,ans=MAX,tot=1;
		string X;
		cin>>X;
		for(int A=0;A<X.size();A++)
		{
			if(X[A]=='<')
			res++;
			else if(X[A]=='>')
			res--;
			ans=min(ans,res);
			tot=max(tot,res);
	    }
		if(ans>0)
		cout<<tot<<"\n";
		else
		cout<<tot+(1-ans)<<"\n";
	}
	return 0;
}
