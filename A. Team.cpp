	#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		int t;
		cin>>t;
		int ans =0;
		for(int i=0;i<t;i++)
		{
			int count =0;
			for(int j=0;j<3
			;j++)
			{
				int a;
				cin>>a;
				if(a==1) count++;
			}
			if(count>=2) ans++;
		}
		cout<<ans<<endl;
		
	}
