#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	scanf("%s",s);
    int len =strlen(s);
    int left =0,right= len-1;
    while(left<=right)
    {
    	if(s[left]==s[right])
    	{
    		left++;
    		right--;
		}
		else if(s[left]>s[right])
		{
			s[right]= s[left];
		}
		else
		{
			s[left]= s[right];
		}
	}
	printf("%s",s);
}
