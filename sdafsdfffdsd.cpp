 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
 	int t;
    cin>>t;
    while(t--)
    {
    	string s;
    	cin>>s;
    	if(s.length()&1) cout<<"-1\n";
    	else
    	{
    		set<char> soln;
    		for(int i=0;i<soln.size();i++)
    		{
    			soln.insert(s[i]);
			}
			if(soln.size()==1) cout<<"0\n";
			else
			{
				
			int shi = 0;
			int count =0;
		    int len  = s.length();
		    bool flag = false;
    	    while(true)
    	    {
    	    	
    	   	set<char> str;
    	   	set<char> str1;
    	   	
    	   	if(flag==false)
    	   	{
    	   	  	 len = len/2;
    	   	  	 if(len!=0)
    	   	  	 count++;
			}
    	   	for(int i=0;i<len;i++)
            {
            	str.insert(s[i]);
            
			}
		
			if(str.size()==1) 
			{
			flag = true;
			shi =1;
			cout<<count<<endl;
		
			break;
		    }
			for(int i=len;i<len*2;i++)
			{
				str1.insert(s[i]);
			}
		    if(str1.size()==1) 
		    {
		    	cout<<count<<endl;
		    	flag =true;
		    	shi =1;
		    	break;
			}
		    	
		     }
		     
	       
	      /* if(shi==0)
	       {
	       	   count =0;
	       	   int len = s.length();
	       	   bool flag =false;
	       	   while(true)
	       	   {
	       	   	
			 
	       	    set<char>str1;
	       	    set<char> str2;
	       	    if(flag =false )
	       	    {
	       	    	len = len/2;
	       	    	count++;
				}
	       	    for(int i=len;i<s.length();i++)
	       	    {
	       	   	    str1.insert(s[i]);
				}
				if(str1.size()==1)
				{
					cout<<count<<endl;
					flag = true;
					break;
				}
				for(int i= len/2;i<s.length()/2;i++)
				{
					str1.insert(s[i]);
					
				}
				if(str1.size()==1)
				{
					 cout<<count<<endl;
					 flag = true;
					 break;
				}
		   }
		   */
    	   
		}
	   }
	}
 }

