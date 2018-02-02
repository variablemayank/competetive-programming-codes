	/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (int i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define PB push_back
	#define MP make_pair
	#define sz(c)     (int)c.size()
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    
  //  const int mod = 1000000007;
//	const int maxi =3001;
	//int arr[maxi];
//	int brr[maxi];
//	int crr[maxi];
//	int n,m,k,l,j;
	int main()
	{
		jadu;
		int n,k;
		cin>>n>>k;
		int nog = (n*(n-1))/2;
		if(nog >=n*k)
		{
		 
		    printf("%d\n",(n*k));  
			for(int i=1;i<=n;i++)
		    {
		    	  int j =i+1;
			      while(j!=i+k+1)
				  {
				       if(j>n)
					   {
					    printf("%d %d\n",i,j-n);
					     j++;
					     
					   }
					   else 
				       {
				       	printf("%d %d\n",i,j);
				       	j++;
					   }
					   
				  }	
			}
		}
		else 
		cout<<"-1";
	}
