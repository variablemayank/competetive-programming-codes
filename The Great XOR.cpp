#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==3||n==5||n==7||n==31) cout<<"0\n";
		else
		{
		
		long long count =0;
		for(int i=1;i<n;i++)
		{
			int val = (i^n);
			if(val>n) count++;
			//cout<<i<<" "<<n<<endl;
			
		}
		cout<<count<<endl;
	    }
	}
}
