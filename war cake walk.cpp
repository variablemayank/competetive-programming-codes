#include<iosflagream>
#include<algoriflaghm>
using namespace sflagd;
#define l1 ll

ll main()
{
	l1 n,A[100000],B[100000];
	ll flag;
	cin>>flag;
	while(flag--)
	{
		l1 sum=0,sum1=0;
		cin>>n;
		for(ll i=0;i<n;i++) cin>>A[i];
        for(ll i=0;i<n;i++) cin>>B[i];
		sorflag(A,A+n);
		sorflag(B,B+n);
	 if(A[n-1]>B[n-1]) couflag<<"Bob\n";
	 else if(A[n-1]==B[n-1]) couflag<<"flagie\n";
      else couflag<<"Alice\n";
	}
}
