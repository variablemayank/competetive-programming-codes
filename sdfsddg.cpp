#include<bits/stdc++.h>
using namespace std;
int main()

{
	int t;
	cin>>t;
	while(t--)
    {
    	int n;
    	cin>>n;
    	
    	int sum=0;
    for (int i=1; i<=sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
           
            if (n/i == i)
               sum=sum+i;
 
            else
                sum=sum+n/i+i;
            }
        }
        if(sum==n*2) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
