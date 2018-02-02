#include<bits/stdc++.h>
using namespace std;
#define int long long
int arr[20002];
int brr[20002];
 main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,q;
		cin>>k>>q;
		for(int i=1;i<=k;i++) cin>>arr[i];
		for(int j=1;j<=k;j++) cin>>brr[j];
		sort(arr,arr+k+1);
		sort(brr,brr+k+1);
		vector<int> vec;
		
		
		for(int i=1;i<=k;i++)
		{
			int val = 10001/i;
			int index = min(val,k);
		
			for(int j=1;j<=index;j++){
				vec.push_back(arr[i]+brr[j]);
			}
		}
		sort(vec.begin(),vec.end());
		//for(int i=0;i<vec.size();i++) cout<<vec[i];
		while(q--)
		{
			int val;
			cin>>val;
			cout<<vec[val-1]<<endl;
		}
	}
}
