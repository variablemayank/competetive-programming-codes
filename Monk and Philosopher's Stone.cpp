#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	queue<int> vec;
	stack<int> s;
	for(int i=0;i<n;i++)
	{
		int v;
		cin>>v;
		vec.push(v);
	}
	int q,x,sum=0;
	cin>>q>>x;
	int arr[q];
	for(int i=0;i<q;i++)
	{
      char ss[5];
      cin>>ss;
      if(ss[0]=='H') arr[i]=1;
      else arr[i]=2;
	}

	for(int i=0;i<q;i++)
	{
	  
   	    if(arr[i] == 1)
		{
			sum += vec.front();
			s.push(vec.front());
			vec.pop();
		}
		if(arr[i] == 2)
		{
			sum -= s.top();
			s.pop();
		}
		if(sum==x)
		{
		    cout<<s.size();
		    break;
		}
	}
	if(sum!= x) cout<<"-1";
}
