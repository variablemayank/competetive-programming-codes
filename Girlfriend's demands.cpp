#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long 
int main()
{
	 string s;
	 cin>>s;
	 ull len = s.length();
	 int t;
	 cin>>t;
	 while(t--)
	 {
	 	ull left ,right;
	 	cin>>left>>right;
	 	
	 	left = len%left;
	 	right = len%right;
	 	//if(len==1) cout<<"No\n";
	 	//else
	 //	{
		 
	 	if(s[left-1]==s[right-1 ]) cout<<"Yes\n";
	 	else cout<<"No\n";
	   // }
	 }
}
