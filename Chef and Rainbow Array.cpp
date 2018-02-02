#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n+1];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		
	    int left= 0;
	    int right =n -1;
	    bool flag = false;
	    while(left<=right)
	    {
	    	if(arr[left]==arr[right])
	    	{
	    		if(((arr[left]+1== arr[left+1]) || (arr[left]-1 == arr[left+1])|| (arr[left]==arr[left+1]) )&&( (arr[right]+1==arr[right-1 ])||(arr[right]-1==arr[right-1])||(arr[right]==arr[right-1])))
	    		{
	    				left++;
	    		        right--;
				}
				else 
				{
					flag =true;
					break;
				}
	    	
			}
			else
			{
				flag = true;
				break;
			}
		}
		if(flag==true)
		cout<<"no\n";
		else cout<<"yes\n";
	}
	return 0;
}
