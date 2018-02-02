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
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    
    const int mod = 1000000007;
	const int maxi =1005;

	//int arr[maxi];
	//int brr[maxi];
	//int crr[maxi];
	//int n,m,k;
	
	int main()
	{
		int n;
		cin>>n;
	     bool prime[100005];
	     memset(prime,true,sizeof(prime));
		 for(int i=2;i<=n+1;i++)
		 {
		 	   if(prime[i]== true)
		 	   {
		
			   for(int j=i*2;j<=n+1;j+=i)
			   {
			   	 prime[j] = false;
			   }	
		       }
		 }	
		 if(n>2)
		 {
		 	cout<<"2\n";
		 }
		 else cout<<"1\n";
		 for(int i=2;i<=n+1;i++)
		 {
		 	if(prime[i]== true) cout<<"1 ";
		 	else cout<<"2 ";
		 }
		 return 0;
	}
