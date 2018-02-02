#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   vector<string> v(t);
   for(int i=0;i<t;i++) cin>>v[i];
   vector<bitset<4> > arr(t);
   for(int i=0;i<t;i++)
   {
   	for(int j=0;j<t;j++)
   	{
   		if(v[i][j]=='1')
   		arr[i] = arr[i].set(j);
	}
   }
   int ans=0;
   for(int i=0;i<t;i++)
   {
   	 for(int j=0;j<i;j++)
   	 {
   		if(v[i][j]=='0')
   		{
   			 if((arr[i]&arr[j]).any())
   			 {
   			 	cout<<arr[i]<<" "<<arr[j]<<endl;
   			    ans += 2;	
			 }
		}
     }
   }
   cout<<ans; 
}
