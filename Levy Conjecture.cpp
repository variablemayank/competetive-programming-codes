 #include<bits/stdc++.h>
 using namespace std;
 
 const int N = 100006;
 
 bool prime[N];
 
 vector<int> vec;
 void seive()
 {
    memset(prime,true,sizeof(prime));
	
	for(int i=2;i<=N;i++)
	{
		if(prime[i]==true)
		{
			for(int j=i*2;j<=N;j+=i)
			{
				prime[j] = false;
			}
		}
	}
	for(int i=2;i<=N;i++)
	{
	  if(prime[i]==true)
	  {
	   vec.push_back(i);	
	  }	
	}	
 }
 
 int main()
 {
 	seive();
 	ios_base::sync_with_stdio(false);
 	int t;
 	cin>>t;
 	while(t--)
 	{
 	   int n;
	   cin>>n;
	   if(n<=5) cout<<"0\n";
	   else
	   {
	   	int count =0;
	   	  for(int i=0;i<vec.size()&&vec[i]<=n;i++)
	   	  {
	   	  	     for(int j=i+1;j<vec.size()&& vec[j+1]<=n;j++)
	   	  	     {
	   	  	    // 	cout<<vec[i]<<" "<<vec[j]<<endl;
	   	           if(n==(vec[i]+2*vec[j])|| (n==(vec[j]+2*vec[i]))) count++;
				 }
		  }
		  cout<<count<<endl;
	   }
	}
 }
