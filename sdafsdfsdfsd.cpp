	#include <cmath>
	#include <cstdio>
	#include <vector>
	#include <iostream>
	#include <algorithm>
	using namespace std;
	
	
	long long solve1(long long n,long long k)
	{
	//     long long ret = ((k-1)*n*n)/(2*k);
	 long long g1 = n%k ;
	 cout<<"g1"<<g1<<endl;
	 long long g2 = k - g1 ;
	 cout<<g2<<endl;
	 long long sz1 = n/k + 1 ;
	 cout<<sz1<<endl;
	 
	 long long sz2 = n/k ;
	 cout<<sz2<<endl;
	 long long ret = g1*sz1*g2*sz2 + g1*(g1-1)*sz1*sz1/2 + g2*(g2-1)*sz2*sz2/2 ;
	 return ret ; 
	}
	 
	long long solve(long long n,long long e)
	{
	 long long k,low = 1,high = n + 1 ;
	 while(low + 1 < high)
	 {
	  long long mid = low + (high - low)/2 ;
	  k = solve1(n,mid) ;
	  if(k < e) low = mid ;
	  else high = mid ;
	 }
	 return high ;
	}
	 
	long long main()
	{
	 long long i,j,n,k,runs ;
	 scanf("%d",&runs) ;
	 while(runs--)
	 {
	  scanf("%d%d",&n,&k) ;o
	  long long ret = solve(n,k) ;
	  prlong longf("%d\n",ret) ;
	 }
	 return 0 ;
	}
