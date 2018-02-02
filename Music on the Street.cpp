#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n,m,mini,maxi;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	cin>>m>>mini>>maxi;
	int diff=0;
	for(int i=0;i<n-1;i++) 
	{
	  diff += arr[i+1]-arr[i];
	}
    m= m-diff;
    if(m>=0)
    {
      cout<<arr[0]-maxi<<endl;
    	
    	return 0;
	}
	else
	{
		cout<<arr[0]-m<<endl;
		return 0;
	}
	
	
}
