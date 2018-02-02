#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	string s;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s;
		int k=s.length();
		if(k==1||k==2||k==3||k==4) cout<<"NO\n";
		else if(k%2==0) cout<<"YES\n";
		else
    cout << "NO"<< endl;
    }
	return 0;
}
