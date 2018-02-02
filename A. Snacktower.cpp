#include<bits/stdc++.h>
using namespace std;
 bool check[100005] ={false};
 int arr[100005];
int main()
{
	int n;
	cin>>n;
	
   
    for(int i=1;i<=n;i++) cin>>arr[i];
   
    int x= n;
    for(int i=1;i<=n;i++)
    {
    	check[arr[i]] = true;
    	while(check[x] == true)
    	{
    	cout<<x<<" ";
    		--x;
		}
		cout<<endl;
	}
	return 0;
	// bye bye 
}
