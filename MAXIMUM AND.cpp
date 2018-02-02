#include<bits/stdc++.h>
#define ll long long int  
#define Max 1001
using namespace std;
int main()
{
	ll A[Max];
	
	int t,k;
	cin>>t;
	while(t-->0)
	{
		ll a,b;
		cin>>a>>b;
		
		if(b-a==1) 
		{
	    ll k=a&b;
		cout<<k<<"\n";
	    }
	    else
	    {
	    	int i=0 ;
		for(int a;a<b;a++)
		{
			A[i]=a&a+1;
			i++;
		}
	    int k=i;
	    sort(A,A+k);
	    cout<<A[k-1]<<"\n";
	}
}
return 0;
}
