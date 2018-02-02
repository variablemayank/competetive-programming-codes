#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cin>>n;
	int a[n+10];
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	int count =0;
	int q;
	cin>>q;
	int var =q;
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		//int count =0;
		count++;
		if(sum>=l && sum<=r)
		{
			cout<<sum<<endl;
			return 0;
		}
	}
	if(count ==var)
    cout<<"-1";
    return 0;
}
