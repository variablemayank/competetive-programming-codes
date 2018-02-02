#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y;
		int A[1001];
		cin>>n>>x>>y;
		for(int i=1;i<=n;i++) scanf("%d",&A[i]);
			int count=0,flag=0;
			for(int i=1;i<=n;i=i+2)
			{
			
			  if(A[i]+A[i+1]+A[i+2]>=x||A[i]+A[i+1]+A[i+2]<=y) count++;flag=1;
			  
			}
			if(flag==1)
			cout<<count<<endl;
			else cout<<"0\n";
			
		}
	}
	
}
