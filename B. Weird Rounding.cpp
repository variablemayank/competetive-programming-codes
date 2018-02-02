	#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		string s;
		int n;
		cin>>s>>n;
	     int len = s.size();
	     int count =0;
	     for(int i=0;i<len;i++) if(s[i]== '0') count++;
	     if(count<n)
	     {
	     	cout<<len-1;
	     	return 0;
		 }
		    int flag =0;
		    for(int i = len-1;i>=0;i--)
		    {
		    	if(s[i]== '0') 
				flag++;
				
		    	if(flag == n)
		    	{
		    	   int flag = len-i;
		    	   flag  = flag-n;
		    	   cout<<flag<<endl;
		    	   return 0;
				}
			}
		 return 0;
	}
