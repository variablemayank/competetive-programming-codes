#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s ="min(int, int)";
	string s1 = "min(int,";
	int n;
	cin>>n;
	if(n==2) cout<<s<<endl;
	else
    {
    	for(int i=0;i<n-2;i++)
    	{
    		cout<<s1<<" ";
		}
		cout<<s;
		for(int i=0;i<n-2;i++) cout<<")";
	}
	return 0;
}
