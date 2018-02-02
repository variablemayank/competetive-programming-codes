#include <iostream>
#include <cstdio>
#include <cmath>
 
using namespace std;
 
long long binary(long long n)	{
	int lo = 0;
	int hi = 50;
	while(lo <= hi)	{
		int mid = lo + (hi - lo)/2;
		long long twoToMid = (1LL<<mid);
		if(twoToMid >= n)	{
			if(mid >= 1)	{
				long long twoToMidMinusOne = (twoToMid>>1LL);
				if(twoToMidMinusOne < n)	{
					return twoToMid;
				}else	{
					hi = mid - 1;
				}
			}else	{
				return 1LL;
			}
		}else	{
			lo = mid + 1;
		}
	}
}
 
int countOnes(long long n)	{
 
	if(n == 0LL)return 0;
 
	return (n&1) + ((countOnes(n>>1))<<1);
}
 
void calculate(long long n, int l, int r, long long s, long long e, long long& answer)	{
	if(l > e || r < s)return;
	if(s >= l && e <= r)	{
		answer += countOnes(n);
		return;
	}else	{
		if(r < (s + ((e-s)>>1)))	{
			calculate(n>>1, l, r, s, s + ((e-s)>>1) - 1, answer);
		}else if(l > (s + ((e-s)>>1)))	{
			calculate(n>>1, l, r, s + ((e-s)>>1) + 1, e, answer);
		}else	{
			answer += (n&1);
			calculate(n>>1, l, r, s, s + ((e-s)>>1) - 1, answer);
			calculate(n>>1, l, r, s + ((e-s)>>1) + 1, e, answer);
		}
	}
}
 
int main()	{
 
 	long long n;
	int l,r;
 
	scanf("%lld %d %d", &n, &l, &r);
	long long answer = 0LL;
	calculate(n, l, r, 1LL, binary(n)-1, answer);
 
	cout<<answer<<endl;
	return 0;
} 
