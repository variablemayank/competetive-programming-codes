#include<iostream>
using namespace std;
int main()
{

	char ch;
	cout<<endl<<"enter the character";
	cin.get(ch);
	cout<<ch;
	cin.putback(ch);
	cin.get(ch);
	cout<<ch;
	int count = cin.gcount();
	cout<<endl<<"characters extraxted in last get()="<<count;
	cin.putback('Z');
	ch=cin.peek();
	cout<<endl<<ch;
	
    cin.get(ch);
	cout<<endl<<ch<<endl;
	return 0;
	
}
