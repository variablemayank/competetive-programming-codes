#include <stdio.h>

int main()
{
  int n,i,flag=0;
  long long int fact=1;
  
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {fact=fact*i;
  }
  while(fact%10==0)
  { flag++;
   fact=fact/10;
  }
  printf("%ld",flag);
  return 0;
}
