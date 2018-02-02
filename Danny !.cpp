#include<bits/stdc++.h>
using namespace std;

vector<int> arr(200005);

long long count(int d,int n)
{
	long long ans =0;
	for(int i=0;i<n;i++)
	{
		auto idx = lower_bound(arr.begin(),arr.end(),arr[i]-d);
		int pos = (idx -arr.begin());
		ans += (i-pos);
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	long long int k;
	cin>>n>>k;
    for(int i=0;i<n;i++)
	cin>>arr[i];
	
	sort(arr.begin(),arr.end());
	
	 int left=0;
     int right = 1000000010;
	while(left<right)
	{
		int mid = (left+right)>>1;
		int  x = count(mid,n);
		if(x>=k) right =mid; 
		else left = mid+1;
	}	
	cout<<left<<endl;
}
