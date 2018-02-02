	#include<bits/stdc++.h>
	using namespace std;
	
	#define ll long long 
	
	int main()
	{
		ll n;
		ll nc=0,poly=0;
		scanf("%lld",&n);
		string s,s1;
		cin>>s>>s1;
	    	
		int len =s.length();
		int len2 = s1.length();
	
		int index1 =0,index2=0;
		for(int i=0;i<n;i++)
		{
		if(index1 == len-1)
		{
			index1 =0;
		}
		else if(index2==len2-1)
		{
			index2=0;
		}
		else if(s[index1]== s1[index2])
		{
			continue;
		}
	    else if(s[index1]=='P' && s1[index2]=='S')
		{
			nc++;
	    }
		else if(s[index1]=='S' && s1[index2]=='P')
		{
		    poly++;
		    
		    
		}
		else if(s[index1]== 'R' && s1[index2]=='P')
	    {
	    	nc++;
	    
	    
		}
		else if(s[index1]=='P' && s1[index2]=='R')
		{
			poly++;
		
	    }
		else if(s[index1]=='R' && s1[index2]=='S')
		{
		    poly++;
		   
		    
		}
 		else if(s[index1]=='S' && s1[index2]=='R')
	    {
	    	nc++;
	    
		}
	    
	     index1++;
	    index2++;
	    }
	   
	   	cout<<poly<<" "<<nc<<endl;
   }
