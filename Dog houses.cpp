#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	set<int> s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int val;
		cin>>val;
		s.insert(val);
	}
    cout<<s.size()<<endl;
}
