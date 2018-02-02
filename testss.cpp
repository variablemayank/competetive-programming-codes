#include<stdio.h>
int main()
{
	int i,n,t,t1,k;
	char ch[100];
//	printf("Enter number of character \n");
//	scanf("%d",&n);
//	printf("Enter the character\n");
	for(i=0;i<n;i++)
	scanf("%c",&ch[i]);
	
//	printf("Entered characters are\n");
//	for(i=1;i<=n;i++)
//	printf("%c",ch[i]);
	
	for(i=0;i<n;i++)
	{
		if(ch[i]=='h')
		t++;
		else if(ch[i]=='k')
		t1++;
	}
	if(t=2*t1)
	printf("%d",t1/2);
	return 0;
}
