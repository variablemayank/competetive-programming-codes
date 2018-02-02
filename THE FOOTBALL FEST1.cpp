#include<bits/stdc++.h>
using namespace std;
stack<long long > s;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,id;
		cin>>n>>id;
		s.push(id);
		while(n--)
		{
			string pass;
			cin>>pass;
			if(pass[0]=='P')
			{
				int secid;
				cin>>secid;
				s.push(secid);
			}
			else
			{
				int  back,pass;pass=s.top();s.pop();back=s.top();s.pop();s.push(pass);s.push(back);
				
		   }
		}
		cout<<"Player "<<s.top()<<endl;
		while(!s.empty()) s.pop();
		
	}
}
