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
	const int maxi =3001;
	int arr[maxi];
	//int brr[maxi];
	//int crr[maxi];
	//int n,m,k,l,j;
	
	
	int main()
	{
		jadu;
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    vector<pi>vec;
	    int minindex;
	    for(int i=0;i<n-1;i++)
	    {
	    	minindex = i;
	    	for(int j=i+1;j<n;j++)
	    	{
	    		if(arr[j]<arr[minindex])
	    		minindex = j;
			}
			
			
			swap(arr[minindex],arr[i]);
			if(minindex !=i)
			vec.push_back(make_pair(minindex,i));
		}
 
        cout<<vec.size()<<endl;
		for(int i=0;i<vec.size();i++)
	    {
	    	 cout<<vec[i].F<<" "<<vec[i].S<<endl;
		}
	    
	}
