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
    
    const int mod = 1000000007;
	const int maxi =100005;
	int arr[maxi];//	int brr[maxi];
////	int crr[maxi];
	int n,m,k,l,j;
	int main()
	{
		jadu;
		
		bool prime[maxi];
	    memset(prime,true,sizeof(prime));
	    for(int i=2;i<=100000;i++)
	    {
	    	if(prime[i] == true)
	    	{
		    	for(int j=i*2;j<=100000;j+=i)
		    	{
		    		prime[j] = false;
				}
			}
		}
		int count =0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>arr[i];
		for(int i=0;i<n;i++) if(!prime[arr[i]]||arr[i] ==2) count++;
		if(n==1) cout<<"1";
		else 
		cout<<count<<endl;
	}
