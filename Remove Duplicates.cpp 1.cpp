#include<iostream>
using namespace std;
#define bool int 
#define NO_OF_CHARS 256
int main()
{
	string s;
	cin>>s;
	bool bin_hash[NO_OF_CHARS]={0};
	int i1=0,i2=0;
	char temp;
	while(s[i1])
	{
		temp=s[i1];
		if(bin_hash[temp]==0)
		{
			bin_hash[temp]=1;
			s[i2]=s[i1];
			i2++;
		}
		i1++;
	}
	s[i2]='\0';
	
	cout<<s;
}
