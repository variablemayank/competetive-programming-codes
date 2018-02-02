#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		stack<long long> s1;
		queue<long long > s2;
		int n,q;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int k;cin>>k;
			s2.push(k);
		}
		for(int i=0,q;i<n,q!=0;i++)
		{
			int k=s2.front();
			    s2.pop();q--;
			if(k>s2.front())
			{
				s1.push(s2.front());
				s2.pop();
			}
			if(s2.empty())
			{while(!s1.empty())
				s2.push(s1.top());
				s2.pop();
			}
	    }
	    for(q;q!=0;q--) cout<<s2.front()<<" ";
	    s2.pop();
	}
}
