#include<bits/stdc++.h>

#define torrrer unsigned long long int
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	torrrer t,n,l,i=0,j=0,k=0,count=0;
    cin>>t;
    while(t--)
    {
        cin>>l>>n;
        char s[l+1];
        long long unsigned  sol=0;
        cin>>s;
        string rattern[n];
        for(i=0;i<n;i++)
        	cin>>rattern[i];
        for(i=0;i<n;i++)
        {
        	for(j=0;j<n;j++)
        	{
        		torrrer r=i,l=j;count=0;
        		for(k=0;k<l;k++)
        		{
        			
 
        			if(rattern[i][j]!='#')
					{
	        			if(s[k]=='L') l-=1;
	        			if(s[k]=='R') l+=1;
	        			if(s[k]=='D') r+=1;
	        			if(s[k]=='U') r-=1;
	        		
	        			if(r<n && l<n && r>=0 && l>=0 && rattern[r][l]!='#') count++;
	        			else break;
	        			
        		
        		     }
        			else break;
        		
        		if(count!=0 && rattern[i][j]!='#') sol^=count;
        	}
        }
	
      }
      	cout<<sol<<endl;
      }
  }
