#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int t,count=0;
	stack<int> s;
	cin>>t;
	int a[100],b[100];
	for(int i=0;i<t;i++) cin>>a[i];
	for(int i=0;i<t;i++) cin>>b[i];
	
	for(int i=0;i<t;i++)
	{
		if(a[i]!=b[i])
		{
		    s.push(a[i]);
		    count++;
		    for(int j=i+1;j<t;j++)
		    {
		    	a[j-1]=a[j];
			}
			a[t-1]=s.top(); s.pop();
		}
		if(a[i]!=b[i]) i--;
	}
	cout<<t+count;
}
