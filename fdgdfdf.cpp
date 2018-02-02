#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,k;
	cin>>t>>k;
	string s;
	cin>>s;
	int found =0;
	for(int i=0;i<t;i++)
	{
		if(s[i]=='G')
		{
			found = i;
	        for(int j=i+1;j<t;j++)
	        {
	        	if(s[j]=='#')
	        	{
	        		k--;
				}
				if(s[j]=='T')
				break;
				
			}
		}
	
	}

	if(k==-1 && s[found+k]!='T') cout<<"NO\n";
	else cout<<"YES\n";
}
