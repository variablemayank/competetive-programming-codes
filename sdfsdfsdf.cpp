#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int a,b,l,r,j;
	char x;
	string str="";
	set<char> s;
	cin>>a>>b>>l>>r;
	for(j=0;j<a;++j)
		str+=(char)('a'+ j);
	x=str[a-1];
	for(j=0;j<b;++j)
		str+=x;
	str+=str.substr(str.size()-a,a);
	x=str[str.size()-1];
	for(j=0;j<b;++j)
		str+=x;
	while(l>2*(a+b) || 2*(r>a+b)){
		l=l-(a+b);
		r=r-(a+b);
	}
 
	for(j=l-1;j<r;++j)
		s.insert(str[j]);
	cout<<s.size()<<"\n";
	return 0;
}
