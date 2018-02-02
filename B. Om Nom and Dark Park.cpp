#include<bits/stdc++.h>
using namespace std;

int arr[1234567];


int main()
{
	memset(arr,0,sizeof(arr));
	int n;
	cin>>n;
	for(int i=2;i<=(1<<(n+1))-1;i++)
	{
		cin>>arr[i];
	}
	
  long long int ans =0;
	for(int i=(1<<n)-1;i>=1;i--)
	{
	   int x = arr[i*2];
	   int y = arr[i*2+1];
	   
	   arr[i] += max(x,y);
	   ans += 2*max(x,y) -x- y;
    }
    cout<<ans<<"\n";
    
    
	
}
