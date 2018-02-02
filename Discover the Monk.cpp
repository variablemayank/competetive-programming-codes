#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<long long > A;
int binsrch(int low,int high,int value)
{

	if(low<=high)
	{
			int mid= low+ (high-low)/2;
	if(value ==A[mid]) return 1;
	else if(value<A[mid]) return binsrch(low,mid-1,value);
	 return binsrch(mid+1,high,value);
    }
    return -1;
}
int main()
{

	int siz,q;
	cin>>siz>>q;
	for(int i=0;i<siz;i++)
	{
		int k;cin>>k;
		A.push_back(k);
	}
	sort(A.begin(),A.end());
	while(q--)
	{
		int ll;
		cin>>ll;
	    
		if(binsrch(0,siz-1,ll)==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
