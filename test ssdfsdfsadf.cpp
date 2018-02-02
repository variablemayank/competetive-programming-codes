	#include<bits/stdc++.h>
	using namespace std;
	
	#define ll unsigned long long int
	
	 
	int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(0);
		ll t,n,m,i=0,j=0,k=0,count=0;
	    cin>>t;
	    while(t--)
	    {
	        cin>>n>>m;
	        char s[n];
	        ll  ans=0;
	        cin>>s;
	        string str[m];
	        for(i=0;i<m;i++)
	        	cin>>str[i];
	        	
	        for(i=0;i<m;i++)
	        {
	        	for(j=0;j<m;j++)
	        	{
	        		ll  fir=i,sec=j;count=0;
	        		
	        		if(str[i][j]=='.')
	        		for(k=0;k<n;k++)
	        		{
	 
	                    	if(s[k]=='L') sec-=1;
		        			if(s[k]=='R') sec+=1;
		        			if(s[k]=='D') fir+=1;
		        			if(s[k]=='U') fir-=1;
		        			if(fir<m && sec<m && fir>=0 && sec>=0 && str[fir][sec]!='#') count++;
		        			else break;
		        	
	        		}
	        		
	        		if(count!=0 && str[i][j]!='#') ans^=count;
	        	}
	        }
			cout<<ans<<endl;;
	    }
		return 0;
	}
