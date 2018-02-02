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
		    	int flag ;
		    	
		    	if(s=="Even") flag =1;
				else flag =2; 
		    	int n;
		    	cin>>n;
		    	int arr[17];
		    	for(int i=1;i<=n;i++) cin>>arr[i];
		    	if(n==1 )
		    	{
		    		if(flag == 2)
		    		cout<<"Monk\n";
		    		else
		    		{
		    			cout<<"Mariam\n";
					}
				}
		    	
		    	else if(n==2)
		    	{
		    	int var =arr[1]|arr[2];
		    		if(var%2==0 &&flag ==1)
		    		{
		    				cout<<"Monk\n";
				    }
				    else if(var&1 && flag==2)
					{
					     cout<<"Monk\n";
					}		
					else
					{
					  cout<<"Mariam\n";
					}
				}
		    	else if(n==3)
		    	{
		    		int var = arr[1]|arr[2];
		    		var = var^arr[3];
		    		if(var%2==0 &&flag ==1)
		    		{
		    				cout<<"Monk\n";
				    }
				    else if(var&1 && flag==2)
					{
					     cout<<"Monk\n";
					}		
					else
					{
					  cout<<"Mariam\n";
					}
				}
				else
				{
 					bool check = false;
                    int evencount =0;
                    int oddcount =0;
                    long long oxa =0;
			    	for(int i=1;i<=n;i++)
			    	{
			    		for(int a=i+1;a<=n;a++)
			    		{
			    			for(int c =a+1;c<=n;c++)
			    			{
			    				for(int d= c+1;d<=n;d++)
			    				{
			    			    	oxa += ((((arr[i]|arr[a])^arr[c])+arr[d]));
			    			    
							}
						
						}
					
					}
					if(oxa%2==0)
					{
					    if(flag ==1)
					    {
					        cout<<"Monk\n";
					    }
					    
					}
					else if(oxa&1)
					{
					    if(flag ==2)
					    {
					        cout<<"Monk\n";
					    }
					}
					else
					{
					    cout<<"Mariam\n";
					}
				
				}
			}
		 }
	}
