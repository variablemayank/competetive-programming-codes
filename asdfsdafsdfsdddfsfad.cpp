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
			
		set<int > s;
		for(int i=1;i<=n;i++)
		{
				cin>>arr[i];
				s.insert(arr[i]);
		}
	
		int brr[n+1];
		
		for(int i=1;i<=n;i++)
		brr[i] = i;
	
		int count =0;;
		bool flag = false;
		for(int i=1;i<=n;i++)
		{
			if(arr[i]==brr[i] ) 
			{
				count ++;
			}
			if(arr[i]>n)
			{
			  flag = true;
			  break;
			}
			
		}
		if(count == n || s.size()<n || flag == true) 
		{
			cout<<"Ugly\n";
			
		}
		else
		{
		 cout<<"Beautiful\n";	
		}
	}
	
}
