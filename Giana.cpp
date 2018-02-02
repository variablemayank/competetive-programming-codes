#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int t,k,count;
	stack<int >s1;
	stack<int >s2;

	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		for(int i=0;i<a;i++) 
		{
			cin>>k;
		    s1.push(k);
		}
		for(int i=0;i<b;i++)
		{
			cin>>k;
			s2.push(k);
		}
		for(int i=0;i<b;i++)
		{
			for(int j=0;j<a;j++)
			{
			  if(s1.top()==s2.top())
			  {
			   s1.pop();
			   count=1;
			  }
			  
			}
			if(count==1) cout<<"YES\n";
			else cout<<"NO\n";
		}
    }
    
    
	return 0;
}
