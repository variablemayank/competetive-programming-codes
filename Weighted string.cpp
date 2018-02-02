#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int A[225]={0};
	int c=1;
	for(int i=97;i<=123;i++)
	{
		A[i]=c++;
	}
	
	while(t--)
	{
		int arr [26];
		int n;
		cin>>n;
		string s;
		cin>>s;
		int count=0;
		int start=0;
		int sum=0;
		for(int i=start;i<s.length();i++)
		{
			sum+=A[s[i]];
		   if(sum==n) count++;
		   else if(sum>n) 
		   {
		   	  i=start++;
		   	  sum=0;
		   }
	    }
	    cout<<count<<endl;
    }
    return 0;
}

