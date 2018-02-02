#include<bits/stdc++.h>
 using namespace std;
 
 int arraay[100005];
 int main()
 {
 	 //ios_base::sync_with_stdio(false);
   int t;
   cin>>t;
  
   while(t--)
   {
   	 int n,k;
   	 cin>>k>>n;
   	 for(int i=0;i<n;i++) cin>>arraay[i];
   	 bool flag = false;
   	 for(int i=0;i<n;i++){
   	 
   	     if(arraay[i]==0)
		  {
		  	--k;
		  } 
		  if(arraay[i]==1)
		  k+=2;
		if(k==0 &&i!=n-1)
   	 	{
   	 		cout<<"No ";
   	 		cout<<i+1<<endl;
   	 		flag = true;
   	 		break;
		}	
   }
   if(flag==false)
   {
   
	cout<<"Yes ";
	cout<<k<<endl;
    }
 
 }}
