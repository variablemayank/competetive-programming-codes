	#include<bits/stdc++.h>
	using namespace std;
	
	int arr[105];
	int main()
	{
		int n,d,l;
		cin>>n>>d>>l;
		
			for(int i=0;i<n;i+=2) arr[i] = 1;
		    int sum =0;
		    sum+= d;
		    sum+= (n/2);
			int minv =(n+1)/2;
			int maxv= (n+1)/2;
			if(sum >maxv)
			{
				cout<<"-1";
			}
			for(int i=1;i<n;i+=2)
			{
				sum+=1;
				if(sum== minv) break;
			}
			if(n*l<minv) return cout<<"-1",0;
			for(int i=0;i<l;i++)
			{
				for(int i=0;i<n;i++)
				{
				  arr[i]++;
				  sum+=1;
				  if(sum==minv)
				}
			}	
	}
