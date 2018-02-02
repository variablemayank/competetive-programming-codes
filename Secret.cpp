#include<bits/stdc++.h>
using namespace std;

int main()
{
	int  n,k;
	cin>>n>>k;
	if(k<3) cout<<"-1";
	else
	{
		int no=0,i;
	for( i=0;i<k;no++,i++ ) printf("%d ",no%k+1);
//	for( no++;i<n;no++,i++ ) printf("%d ",no%k+1);
    }
    return 0;
}
