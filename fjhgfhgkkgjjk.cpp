 #include<bits/stdc++.h>
 using namespace std;
 
 int arr[100005];
 int main()
 {
 	 //ios_base::sync_with_stdio(false);
   int t;
   cin>>t;
  
   while(t--)
   {
   	 int n,k;
   	 cin>>k>>n;
   	 for(int i=0;i<n;i++) cin>>arr[i];
   	 bool flag = false;
   	 for(int i=0;i<n;i++){
   	 
   	     if(arr[i]==0)
		  {
		  	--k;
		  } 
		  if(arr[i]==1)
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
