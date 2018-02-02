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

	int arr[maxi];
	int brr[maxi];
	int crr[maxi];
	int n,m,k;
	
	int main()
	{
		int t;
        cin>>t;
        for(int i=0;i<t;i++)
        {
        	double pa;
        	cin>>pa;
        	double pb =(1-pa);
        	if(pa>=0.5)
        	{
        		//cout<<10000 +10000*(1-s)*(2*s-1)<<endl;
        		printf("%.10lf\n",10000 +10000 *pb*((2*pa-1)));
			}
			else 
			{
				printf("%.10lf\n",10000+10000*pa*(1-2*pa));
			}
		}
	}
