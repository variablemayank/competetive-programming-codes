#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[2005];
	int brr[2005];
	int count =0;
	for(int i=0;i<n;i++)
	{
	   cin>>arr[i];
	   if(arr[i]==0) count++;
	}
	for(int i=0;i<m;i++)
	{
		cin>>brr[i];
	}
	
	sort(brr,brr+m);
	int j=0;
		vector<int> a,b;
	for(int i=0;i<n;i++)
    {
    	if(arr[i]==0)
    	{
    		arr[i] = brr[j++];
		}
		a.push_back(arr[i]);
		b.push_back(arr[i]);
	}

	sort(a.begin(),a.end());
	if(a==b )
	{
		if(count==1)
		cout<<"No\n";
		else cout<<"Yes\n";
		return 0;
	}
	else
	{
		cout<<"Yes\n";
	}
}
