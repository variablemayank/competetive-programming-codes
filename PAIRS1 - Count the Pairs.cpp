#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	long long n,k;
	cin>>n>>k;
	vector<long long>vec(n);
	for(long long i=0;i<n;i++) cin>>vec[i];
	sort(vec.begin(),vec.end());
	long long left =0;
	long long right =0;
	long long count =0;
	while(right<n)
	{
		if(vec[right]-vec[left] ==k)
		{
			count++;
			left++;
			right--;
		}
		else if(vec[right]-vec[left]>k) left++;
		else right++;
	}
	cout<<count<<endl;
}
