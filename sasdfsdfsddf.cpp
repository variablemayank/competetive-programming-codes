    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
	{
     
    	int n,m,k;
    	cin>>n>>m>>k;
    	int arr[n+1];
    	for(int i=0;i<m+1;i++)
		arr[i]=0;
    	bool check = false;
    	int ans;
    	for(int i=0;i<m;i++)
    	{
    	   	int a;
    	   	
		   cin>>a;
    		arr[a]=1;
    	}
    	int pos = 1;
    	if(arr[pos])
		{
    		ans = pos;
    		check = true;
    	}
     
    	for(int i=0;i<k && !check;i++)
		{
			int a,b;
			
    		cin>>a>>b;
    		if(a== pos)
			{ 
    		    pos=b;
    			if(arr[pos])
				{	
    			ans = pos;
    			check = true;
    			}
    		}
    	}
    	if(!check)
		{
		 ans= pos;
		}
    	cout<<ans<<endl;
    	return 0;
    }
