#include<bits/stdc++.h>
using namespace std;

int main()
{
	int s,limit;
	cin>>s>>limit;
	int sum=0;
	bool flag = false;
	set<int> solution;
	while(limit>0)
	{
		int i=0;
		int k = limit&(1<<i);
		cout<<"k"<<k<<"limit"<<limit<<"first\n";
		while(k==0)
		{
			i++;
			k= limit&(1<<i);
			cout<<"whilewalak"<<k<<endl;
		}
		if(sum+(1<<i)<=s)
		{
			sum+= 1<<i;
			solution.insert(limit);
		}
		if(sum==s)
		{
			flag = true;
			break;
		}
		limit--;
	}
	if(flag==true)
	{
		cout<<solution.size()<<endl;
		set<int> ::iterator it = solution.begin();
		while(it!=solution.end())
		{
			cout<<*it<<" ";
			it++;
		}
		
	}
	else
	{
		cout<<"-1\n";
	}
}
