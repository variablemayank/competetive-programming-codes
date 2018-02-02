#include<bits/stdc++.h>
using namespace std;

const int maxi = 1e9;
vector<bool> prime(maxi,true);

void seive(long long n)
{
   for(int i=2;i*i<=n;i++)
   {
   	   if(prime[i]==true)
   	   {
   	        for(int j=i*2;j<=n;j+=i)
			{
				prime[j]=false;
			}	
	   }
   }
}



int main()
{
	int n,m;
	cin>>n>>m;
	seive(m);
	int k =0;
	long long arr[m];
	for(int i=n;i<=m;)
	{
		if(prime[i]==true)
		{
			arr[k++] = i;
			i+=2;
		}
		else 
		i++;
	}
	int count =0;
	for(int i=0;i<k;i++)
	{
		 if(arr[i+1]-arr[i]==2)
		 {
		 	count++;
		 }
	}
	cout<<count<<endl;
}
