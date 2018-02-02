#include<iostream>
#include<stack>
#define ll long long
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	stack<ll> s;
	while(t--)
	{
	
		cin>>n;
		if(n==1&&s.empty())  cout<<"No Food\n";
		else if(n==2)
		{
			cin>>k;
			s.push(k);
		}
        if(n==1&&!s.empty()) 
		{
		cout<<s.top()<<endl; 
		s.pop();
	    }
        
	}
	return 0;
}
