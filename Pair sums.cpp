#include<iostream>
#include<algorithm>
#define MAX 10001
using namespace std;
int main()
{
	int n,sum; cin>>n>>sum;
	long long A[MAX];
	for(int i=0;i<n;i++) cin>>A[i];
	bool a[MAX]={0};
	int count=0;
	for(int i=0;i<n;i++)
	{
		int temp=sum-A[i];
		if(temp>=0 && a[temp]==1)
		{
			count=1;
			break;
		}
		a[A[i]]=1;
	
	}
	if(count==0) cout<<"NO\n";
	if(count==1) cout<<"YES\n";
	
}
