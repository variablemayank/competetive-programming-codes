#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count =0;
		for(int i=0;i<s.length();i++)
		{
			if(i-1>=0 && s[i-1]=='W')
			{
				count++;
				s[i-1]=0;
			} 
			if(i-2>=0 && s[i-2]=='W')
			{
				count++;
				s[i-2]=0;
			}
			if(s[i+1]=='W') 
			{
				count++;
				s[i+1]=0;
			}
			if(s[i+2]=='W')
			{
				count++;
				s[i+2]=0;
			}
			
		}
		cout<<count<<endl;
	}
}
