#include<iostream>
using namespace std;
#define maxi 1005
int answer[maxi];
int main()
{
	int n,k; cin>>n>>k; int arr[n],count=0;
	for(int i=1;i<=n;i++ ) cin>>arr[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(abs(i-k) ==abs(j-k) &&arr[i]!=arr[j]) 
			{
			answer[i]=answer[j]=true;
		    }
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==1 && !answer[i]) count++;
	}
	cout<<count<<endl;
}
