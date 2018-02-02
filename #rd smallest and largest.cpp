#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		sort(s.begin(),s.end());
		if(s.length()<=2)
		{
		 cout<<"Not possible!\n";
		  continue;
	}
		next_permutation(s.begin(),s.end());
		next_permutation(s.begin(),s.end());
		cout<<s<<" ";
		sort(s.begin(),s.end());
		reverse(s.begin(),s.end());
		prev_permutation(s.begin(),s.end());
		prev_permutation(s.begin(),s.end());
		cout<<s<<endl;
	}
}
