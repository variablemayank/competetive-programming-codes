	#include<bits/stdc++.h>
	using namespace std;
	
	
	int  main()
	{
		
		int  t;
		scanf("%d",&t);

		while(t--)
	    {
		    long long count =0;
			long long int  a,b;
		    scanf("%lld%lld",&a,&b);
			while(a>0 && b>0)
			{
				count +=  b/a;
				b= b%a;
				  swap(a,b);
				}
			}
			printf("%lld\n",count);
  		}

	}
