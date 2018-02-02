#include<stdio.h>
#include<math.h>
int gcd(int m, int n) {
    if(m == 0 && n == 0)
        return -1;

    if(m < 0) m = -m;
    if(n < 0) n = -n;

    int r;
    while(n) {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}
int main()
{
	int t;
	int   A[1000100];
	int count=0;
	scanf("%d",&t);
	int i;
	for( i=0;i<t;i++) scanf("%d",&A[i]);
	int j;
	for(i=0; i<t;i++)
		{
			for(j=t-1;i<j;j--)
			if(A[i]>A[j])
			{
				if(gcd(A[i],A[j])==1)
				 count++;
			}
		}
	printf("%d\n",count);
}
