#include <bits/stdc++.h>
using namespace std;
int floor(long long arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
 
    if (x >= arr[high])
        return high;
 
    int mid = (low+high)/2;
 
    if (arr[mid] == x)
        return mid;
 
    if (mid > 0 && arr[mid-1] <= x && x < arr[mid])
        return mid-1;
 
    if (x < arr[mid])
        return floor(arr, low, mid-1, x);
 
    return floor(arr, mid+1, high, x);
}
int main() {
	int i,t,n,q,j,p;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		long long a[n],k,u,ans;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
 
		for(i=0;i<q;i++)
		{   u=0;ans=0;
			cin>>k;
		  if(a[n-1]<k)
		   {
		    	for(j=n-1;j>=u;j--)
		  	    {
		  		if(u+k-a[j]<=j){ans++;u=u+k-a[j];}
		  		else break;
		     	}
		  	cout<<ans<<"\n";
		   }
 
		  else
		   { p=floor(a,0,n-1,k);
 
		     if(p==-1){cout<<n<<"\n";break;}
             else {	
             	    if(a[p]==k){ans=n-p;p--;}
             	    else ans=n-p-1;
             	    for(j=p;j>=u;j--)
		  	        {
		  		     if(u+k-a[j]<=j){ans++;u=u+k-a[j];}
		  		     else break;
		     	    }
             	  cout<<ans<<"\n";
                  }
		   }
		}
	}
 
	return 0;
}
