		#include <bits/stdc++.h>
		using namespace std;
		 
		
		int main() 
		{
		int n,m,s;
		int var1,var2,var3;
		bool flag = false;
			
		cin>>n>>m>>s;
		
		for(int j=s;;j++)
		{
			
		var1=(j/50)%475;
		
		for(int i=1;i<=25;i++)
		{
		   var1=((var1*96)+42)%475;
		   var2=26+var1;
		if(var2==n)
		{
			  flag=true;
			  var3 = j;
				break;
		}
		}
		if(flag==true)
		{
			break;
		}
		
		}
		
		if(var3<=m)
		return cout<<"0",0;
		else
		{
			int a = var3-m;
			
			int b =a/100;
			//cout<<u<<endl;
			cout<<b<<endl;
		}
		 
		 
			return 0;
		}
