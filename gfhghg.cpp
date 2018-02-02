#include <stdio.h>
int main()
{
int i,j,k,l,A[100],T, hyp, ptrip, count;
scanf("%d", &T);
for(i=0;i<T;i++)
{
scanf("%d",&A[i]);
}

for(i=0;i<T;i++)
{
for(j=0;j<A[i];j++)
{
for(k=0;k<A[i];k++)
{
for(l=1;l<A[i];l++)
{
ptrip = j*j + k*k;
hyp = l*l;
if(ptrip == hyp)
{
count++;
}
}
}
}
}
printf("%d\n", count);
return 0;
}
