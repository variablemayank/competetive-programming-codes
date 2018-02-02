#include<bits/stdc++.h>
using namespace std;

long long isPowerOfTwo(long long  n)
{  return n && (! (n & (n-1)) ); }
 
// Returns position of the only set bit in 'n'
long long findPosition(long long  n)
{
    if (!isPowerOfTwo(n))
        return -1;
 
    long long  count = 0;
 
    // One by one move the only set bit to right till it reaches end
    while (n)
    {
        n = n >> 1;
 
        // increment count of shifts
        ++count;
    }
 
    return count;
}

 main()
{
	long long t;
	cin>>t;
	
	while(t--)
	{
		map<long long ,long long > mp;
		long long n;
		cin>>n;
	    for(long long i=0;i<n;i++)
	    {
	       long long var ;
	       cin>>var;
	       mp[var]++;
	       
		}
	    vector<long long> vec;
		for(map<long long ,long long >::iterator it =mp.begin();it!=mp.end();it++){
			if(it->second >1)
			{
				vec.push_back(findPosition(it->first)-1);
			}
		}
	    sort(vec.begin(),vec.end());
	    cout<<vec[vec.size()-1]<<endl;
	    mp.clear();
	    
	}
}
