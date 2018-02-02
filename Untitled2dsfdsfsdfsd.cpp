#include<stdio.h>
int main() 
{ long int num,digit,i,fact=1,sum=0,t,sum1=0,num1;
printf("Enter any number\n");
scanf("%d",&num1);
for(num=1;num<=num1;num++)
{
t=num;
while(num!=0)
 {digit=num%10;
  printf("Digit=%d",digit);
   for(i=1;i<=digit;i++)
   {fact=fact*i;
   }
   printf("\n%d!=%d",digit,fact);
   sum=sum+fact;
   fact=1;
   printf("\nSum=%d",sum);
   num=num1/10;
 }
 if(sum%t==0)
 {sum1=num1+sum1;
 printf("\nSum1 %d",sum1);
}
}
 return 0;
}
