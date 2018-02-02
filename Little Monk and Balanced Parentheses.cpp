#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++) cin>>arr[i];
	stack<int> s;
	int sum =INT_MIN,count=0;
	for(int i=0;i<t;i++)
	{
		 
        if(i==0) s.push(arr[i]);
		else if(i!=0)
		{
		   if(!s.empty() && s.top()+arr[i] ==0 && arr[i]<0)
		  {
		  
		  s.pop();
		  count+=2;
		  }
		  else s.push(arr[i]);
	     }
	    
	     cout<<s.size()<<endl;
		 //0cout<<count<<endl;
		 sum = max(sum,count);
	}
	cout<<sum<<endl;
}
