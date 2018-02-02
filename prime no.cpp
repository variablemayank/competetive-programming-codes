#include<stdio.h>
int main()
{int n,i,fact,x,j,flag=0;
 printf("Enter the number\n");
 
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
  {
  
  if(n%i==0)
     i=n;
  }
 for(j=1;j<=n;j++)
  {
  
  if(n%j==0)
    flag++;
}
    if(flag<=2)
  {
   printf("prime\n");
   printf("%d\n",n);
  }  
  
return 0;
}
