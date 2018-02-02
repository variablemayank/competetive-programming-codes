#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	ios_base::sync_with_stdio(false); cin.tie();
	while(t--)
	{
		string str;
		cin>>str;
		int len= str.length();
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
		cout<<str;
		//cout<<count<<endl;
	}
}
