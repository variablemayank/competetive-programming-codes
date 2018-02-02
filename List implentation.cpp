#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> LI;
	list<int> ::iterator it;
	LI.push_back(4);
	LI.push_back(5);
	
	LI.push_front(3);
	LI.push_front(5);
	
	it=LI.begin();
	
	LI.insert(it,1);
	cout<<"All elements of list are\n";
	for(it=LI.begin();it!=LI.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	LI.reverse();
	LI.remove(5);
	for(it=LI.begin();it!=LI.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	
	//removes elements from back
	LI.pop_back();
	LI.pop_front();
	for(it=LI.begin();it!=LI.end();it++) cout<<*it<<" ";
	
	
	return 0;
	}
