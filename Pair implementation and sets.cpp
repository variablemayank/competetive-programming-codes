/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	pair<int ,char> p;
	pair<int,char> p1(2,'b');
	p=make_pair(1,'a');
	cout<<p.first<<' '<<p.second<<endl;
	cout<<p1.first<<' '<<p1.second<<endl;
	return 0;
	
}
*/
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
	
}
