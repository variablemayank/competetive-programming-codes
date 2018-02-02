#include<bits/stdc++.h>
using namespace std;

const int mod =1000000007;

int main()
{
	 
	 long long unsigned l,r,k;
	 cin>>l>>r>>k;
	 int flag =false;
	 for(int i =0;i<64;i++)
	 {
	 	  long long ans = pow(k,i);
	    	if(ans>=l && ans<=r)
	    	{
	    		 cout<<ans<<" ";
	    		 flag = true;
			}
	 }
	 if(flag == false) cout<<"-1";
	 
}

