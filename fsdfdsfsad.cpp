	#include<bits/stdc++.h>
	using namespace std;
	
	int arr[1000006];
	int main()
	{
		
		ios_base::sync_with_stdio(false);
		int  n,m,k;
		cin>>n>>m>>k;
	    
		for(int i=1;i<=m;i++)
		{
			int a;
			cin>>a;
			arr[a] = 1;
		}
		arr[1] = 2;
		while(k--)
		{
			
		  int c,d;
		  cin>>c>>d;
		  if(arr[c] !=1 && arr[d] != 1)
		  {
		  	swap(arr[c],arr[d]);
		  }
		  if(arr[c]==1)
		  {
		  	cout<<c;
		  	return 0;
		  }
		  if(arr[d]==1) 
		  {
		    cout<<d;
		    return 0;
		  }
		 
		}
		for(int i=1;i<=n;i++) if(arr[i]==2) return cout<<i,0;
		
		
	}
