#include <bits/stdc++.h>
using namespace std;
int arr[1000006]={0}, arr2[1001]={0};
int main()
{
    int t, n, k;
    cin>>t>>n;
    
    for(int i=1;i<=n;i++)
	{
        for(int j=i;j<=n;j+=i)
		{
			cout<<j<<" ";
            arr[j]++;
        }
        cout<<endl;
        arr2[arr[i]]++;
    }
    for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
    for(int i=1;;i++){
        arr2[i]+=arr2[i-1];
        //cout<<arr2[i]<<" ";
        if(arr2[i]==n) break;
    }
 
    while(t--){
        cin>>k;
        cout<<arr2[arr[k]-1]<<endl;
    }
}
