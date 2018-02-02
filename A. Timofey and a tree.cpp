// Move fast and break things.
// Unless you are breaking stuff you are not 
// moving fast enough


/* 
 1---> 2             colors are given as follows 1 ,2 ,1 ,1  taking 2nd position vertex gives us the same colours subtree yureka
       |
       |         --->         2
 4-----3                    /   \
                           /     \
						   1      3
						           \
						            4
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	for(int i=0;i<n-1;i++)
	{
		cin>>a[i];
		cin>>b[i];
		a[i]--; b[i]--;   // making 0th index
	}
    
    vector<int> color(n);
    for(int i=0;i<n;i++)
    {
    	cin>>color[i];
	}
	
	int cnt=0;

	vector<int> dim(n);
	for(int i=0;i<n-1;i++)
	{
	     if(color[a[i]]!=color[b[i]])
	     {
	     	cnt++;
	     	dim[a[i]]++;     // Checking the colors that of u-->v node that there are different or not
	     	dim[b[i]]++; 
		 }
	}
	//for(int i=0;i<n;i++) cout<<dim[i]<<endl;   // consider one node can the divide the tree
	                                             // with diff same colors subtree :D 
	for(int i=0;i<n;i++)
	{
		if(dim[i]==cnt)                        
		{
			cout<<"YES\n";
			return cout<<i+1,0;
		}
	}
	cout<<"NO\n";
	
	return 0;
}
