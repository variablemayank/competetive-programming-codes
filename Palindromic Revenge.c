#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	
//	ios_base::sync_with_stdio(false); cin.tie();
	while(t--)
	{
		char  str[1000];
		scanf("%s",&str);
		int len= strlen(str);
		int left= 0,right=len-1;
		int count=0;
		while(left<=right)
		{
			if(str[left]==str[right])
			{
			  left++;right--;
			  
			}
			else if(str[left]!=str[right])
			{
			   if(str[left]<str[right])
			   {
			   	str[right] =str[right]-1;
			   	count++;
			   }
			   else 
			   {
			   	str[left]=str[left]-1;count++;
			   }
			   
			}
		}
		printf("%d\n",count);
	}
}
