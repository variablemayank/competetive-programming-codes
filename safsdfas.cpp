#include<bits/stdc++.h>
using namespace std;


int main()
{
	string str;
	getline(cin,str);
	for(int i=0;i<str.length();++i)
	{
		if(str[i]!=' ')
		{
			int asciivalueis  = str[i];
			cout<<" asciivalue of "<<str[i]<<" is "<<asciivalueis<<endl;
		}
		else cout<<" SPACE "<<endl;
	}
	
}
