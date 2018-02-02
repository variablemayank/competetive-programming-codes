#include<bits/stdc++.h>
using namespace std;

const int maxi =100005;
int arr[maxi];
int freq[maxi];
int  l = 1;
int r =1;
int sum;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>arr[i];
	
	for( ;sum<m && r<=n;r++)
    {
    	sum += (!freq[arr[r]]);
    	freq[arr[r]]++;
	}
	//cout<<sum<<endl;n
	if(sum<m) return cout<<"-1 -1",0;
	for(; freq[arr[l]]>1;l++ )
	{
		freq[arr[l]]--;
	}
	cout<<l<<" "<<r-1;
}
