#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;

	int x=0;
	for(int i=0;i<n;i++)
	{
			cin>>s;
		if(s[0]== '+') x++;
		else if(s[2] == '+') x++;
		else if(s[0]== '-') x--;
	    else if(s[2]== '-') x--;
	}
	cout<<x;
}
