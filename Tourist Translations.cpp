#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string first;
	cin>>t>>first;
	string soln[26];
    for(int i=0;i<26;i++)
    {
    	soln[i] = first[i];
	}
	while(t--)
	{
		string test;
		cin>>test;
		int len = test.length();
		for(int i=0;i<len;i++)
		{
			if(test[i]>=65 && test[i]<=90)
			{
				
			    string c = soln[test[i]- 65];
			    c[0] =c[0] -32;
			    cout<<c[0];
			}
			else if(test[i]>=97 &&test[i]<=122)
			{
				cout<<soln[test[i]-97];
			}
			else if(test[i]=='_')
			{
				cout<<" ";
			}
			else cout<<test[i];
		}
		cout<<endl;
	}
}
