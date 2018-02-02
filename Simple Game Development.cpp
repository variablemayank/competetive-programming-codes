#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,q;
	cin>>n>>m>>q;
	int A[n][m];
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	cin>>A[i][j];
	}
	while(q--)
	{
	    int B[n];
	    for(int i=0;i<n;i++) cin>>B[i];
	    int ans=m-1;
	    
	    for(int i=0;i<n;i++)
	    {
	    	while(B[i]<A[i][ans])
	    	ans--;
		}
		cout<<ans+1<<endl;
	}
}
