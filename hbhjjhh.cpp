#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int count =0;
	int maxi =0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			count++;
		}
		if(s[i]==' ')
		{
		     maxi = max(maxi,count);
			 count=0;	
		}
	}
	maxi = max(count,maxi);
	cout<<maxi;
}
