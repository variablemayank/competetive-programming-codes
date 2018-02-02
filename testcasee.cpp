	#include<bits/stdc++.h>
    using namespace std;
    
    int main()
    {
    	int mask = 30;
    	for(int i=0;i<34567;i++)
    	{
    		if((i&(1<<0)) ==0) 
    		{
			cout<<i<<endl;
			int k = ((1<<0)|i);
			cout<<k;
		
		}
	     }
	 }
