	#include <bits/stdc++.h>
	using namespace std;
	typedef long long int LL;
	
	int divcnt[5000005], cum[5000005];
	
	int main()
	{
		LL p;
		for (int i = 0; i < 5000005; i++)
			divcnt[i] = 0;
		for (int i = 2; i < 5000005; i++)
		{
			if (divcnt[i] == 0)
			{
				p = i;
				while (p < 5000005)
				{
					for (LL j = p; j < 5000005; j += p)
						divcnt[j]++;
					p *= i;
				}
			}
		}
		for(int i=1;i<=10;i++) cout<<divcnt[i]<<" ";
		cum[0] = 0;
		for (int i = 1; i < 5000005; i++)
			cum[i] = cum[i - 1] + divcnt[i];
	    cout<<cum[6];
		int t, a, b;
		scanf("%d", &t);
		while (t--)
		{
			scanf("%d%d", &a, &b);
			printf("%d\n", cum[a] - cum[b]);
		}
		
		return 0;
	}
