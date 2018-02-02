  #include<bits/stdc++.h>
  using namespace std;

  const int mod  =1e6+3;

  bool check[26][26];
  int dp[2048][26][26];
  int add(int a,int b)
  {
    int c= a+b;
    if(c>=mod)
    {
  	 c-=mod;
    }
    return c;
  }
   int solve(int n,int last,int slast)
   { 
	if(n==0)
	return 1;
	if(dp[n][last][slast]!=-1)
	return dp[n][last][slast];
	
	int res=0;
	for(int i=0;i<26;i++)
	{
		if(check[last][i] && slast !=i)
		{
		  res= add(res,solve(n-1,i,last));  //abba
		}
	}
	return dp[n][last][slast] =res;
   }
   int main()
   {
   int n,k;
   scanf("%d%d",&n,&k);
   for(int i=0;i<26;i++)
   {
   	for(int j=0;j<26;j++)
    {
    	check[i][j] = true;
	}
   }
   string a,b;
   while(k--)
   {
   	  cin>>a>>b;
   	  check[a[0]-'A'][b[0]-'A'] = false;
   	  check[b[0]-'A'][a[0]-'A'] = false;
   }
   if(n==1)
   {
   	puts("26\n");
   	exit(0);
   }
   else if(n&1)
   {
   	puts("0");
   }
   else
   {
   	int count =0;
   	  n>>=1;
   	  if(n==1)
   	  {
   	     for(int i=0;i<26;i++)
			{
			 if(check[i][i])	 count++;    // aa bb cc dd 
		    } 
	  }
	  else
	  {
	  	memset(dp,-1,sizeof(dp));
	  	 for(int i=0;i<26;i++)
	  	 {
	  	 	if(check[i][i])
	  	 	{
			
	  	     for(int j=0;j<26;j++)
			 {
			    if(check[i][j] && j!=i)
				{
					count = add(count,solve(n-2,j,i));   //abba
				}
		     }
			 	
		    }
	     }
      }
      cout<<count;
      exit(0);
   }
}
