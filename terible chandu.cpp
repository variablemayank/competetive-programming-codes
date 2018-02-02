#include<bits/stdc++.h>
using namespace std;
void reverse(string );
int main()
{
	int t;
	string s;
	cin>>t;
	while(t--)
	{
	
	cin>>s;
	reverse(s);
    }   

}
void reverse(string k)
{
	int o=k.length();
	int l=o-1;
	while(k[l]!='\0')
	{
		cout<<k[l];
		l--;
	}
}
