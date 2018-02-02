#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	bool flag = false;
	int mid =  n/2;
	
	for(int i=0;i<n-1;i++)
    {
    	if(i< (mid -1) && arr[i]<= arr[i+1])
        {
        	flag = true;
		}
		else 
		{
		 return cout<<"NO\n",0;
		}
		
		if(i>= (mid-1 ) && arr[i]>=arr[i+1])
		{
		   flag = true;
		}
		else
		{
			return cout<<"NO\n",0;
			
		}
    }
    if(flag == true)
    return cout<<"YES\n",0;
    else
    return cout<<"NO\n",0;
}
