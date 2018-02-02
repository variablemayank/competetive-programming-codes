	#include<bits/stdc++.h>
	
	#define long  unsigned long long int
	using namespace std;
	 
	int main()
	{
		ull t,n,l,i=0,j=0,k=0,cnt=0;
	    cin>>t;
	    while(t--)
	    {
	        cin>>l>>n;
	        char s[l];
	        ull ans=0;
	        cin>>s;
	        string str[n];
	        for(i=0;i<n;i++)
	        	cin>>str[i];
	        for(i=0;i<n;i++)
	        {
	        	for(j=0;j<n;j++)
	        	{
	        		ull p=i,q=j;cnt=0;
	        		for(k=0;k<l;k++)
	        		{
	 
	        			if(str[i][j]!='#'){
		        			if(s[k]=='L') q-=1;
		        			if(s[k]=='R') q+=1;
		        			if(s[k]=='D') p+=1;
		        			if(s[k]=='U') p-=1;
		        			if(p<n && q<n && p>=0 && q>=0 && str[p][q]!='#') cnt++;
		        			else break;
		        	
	        			}
	        			else break;
	        		}
	        		if(cnt!=0 && str[i][j]!='#') ans^=cnt;
	        	}
	        }
			cout<<ans<<endl;
	    }
		return 0;
	}
	 
