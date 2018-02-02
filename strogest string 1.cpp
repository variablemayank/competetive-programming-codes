#include<iostream>
using namespace std;

bool yes [26+1];
int main()
{
	
	int n;
	string s;
	cin>>n>>s;
	char *p;
	int st=0;
	while(st<s.length())
	{
		int maxi_index = -1;
		char maxi ='A';
		for(int i=st;i<s.length();i++)
		{
		
		if(s[i]>maxi &&!yes[s[i] -'a'])
		{
			maxi =s[i];
			maxi_index=i;
		}
      	}
        if(maxi_index==-1) break;
        cout<<maxi;
        st=maxi_index+1;
        yes[maxi-'a']= true;
	}
	return 0;
}
