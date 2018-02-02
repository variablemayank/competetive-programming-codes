#include<bits/stdc++.h>
#define el  cout<<endl;
using namespace std;
int main()
{
	int A[]={5,4,2,3,1};
	set<int> s;
	set<int>::iterator it;
	for(int i=0;i<5;i++) s.insert(A[i]);
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	el;
//	for(it=s.begin();it!=end();it++) cout<<*it<<" ";
	
}
