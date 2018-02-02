	#include<bits/stdc++.h>
    using namespace std;
    
    int main()
    {
    	int n;
    	cin>>n;
    	for(int i=0;i<n;i++)
    	{
    		int m;
    		cin>>m;
    		string a= "1";
    		string b= "10";
    		string c = "100";
			string d = "101";
			string soln ;
			for(int i=1;i<=m;i++)
			{
				 if(i &1)
				 {
				     soln += "1"; 
				 }	
				 else 
				 soln+= "0";
			} 
			cout<<soln<<endl;
		}
	}
