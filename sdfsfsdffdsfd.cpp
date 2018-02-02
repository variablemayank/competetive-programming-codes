		#include<bits/stdc++.h>
		using namespace std;
		int main()
		{
			ios_base::sync_with_stdio(false);
		int t;
		cin>>t;
	    while(t-->0)
	    {
		
		   long long a,b;
		 scanf("%lld%lld",&a,&b);
		  string arr;
		  cin>>arr;
		   long long int count=0,count1=0,var=0;
		   
		   
		   for(int i=0;i<a;i++)
		   {
		       if(arr[i]=='a')
		       {
		           var++;
		           for(int j=i+1;j<a;j++)
		           {
		               if(arr[j]=='b')
		               {
		                   count++;
		               }
		           }
		       }
		       if(arr[i]=='b')
		       {
		           count1++;
		       }
		   }
		 
		   printf("%lld\n",(count*b)+(((count1*(b-1)*(b))/2)*var));
}
		
		
		}

