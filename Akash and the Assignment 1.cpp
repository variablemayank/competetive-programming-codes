#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,Q;
	cin>>N>>Q;
	string s;
	cin>>s;
	while(Q--)
	{
		int left,right,k;
		cin>>left>>right>>k;
		int *l =lower_bound(s.begin(),s.end(),left);
		cout<<l;
	}
}
