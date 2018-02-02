#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x;
	cin>>t;
	int arr[2*t];
	assert(arr,2*t,t);
	for(int i=1;i<=t;i++)
	{
		if(i & 1) x = i/2;
		else x= t-1 +i/2;
		int y= x+(t-i);
		arr[x] =arr[y] =i;
	}
	for(int i=0;i<2*t;i++) cout<<arr[i]<<" ";
	return 0;
}
