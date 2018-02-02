#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int>s;
		for(int i=0;i<5;i++)
	{
		s.push(i);
	}

	cout<<"Size of stack"<<s.size()<<endl;
	
	
	cout<<"Top of stack"<<s.top()<<endl;
	
	for(int i=0;i<5;i++) s.pop();
	
	if(s.empty())  cout<<"Stack is empty\n";
	else           cout<<"stack is not empty'n";
	return 0;
	
	
}
