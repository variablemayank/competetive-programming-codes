#include<bits/stdc++.h>
using namespace std;



int main()
{
	int n,k;
	cin>>n>>k;
	
	vector<int> arr(2005);
	for(int i=1;i<=n;i++)
	cin>>arr[i];
	
	sort(arr.begin()+1,arr.begin()+1+n);
	
//	for(int i=1;i<=n;i++)
  //  cout<<arr[i]<<" ";
    //cout<<endl;
//	set<pair<int,pair<int,int> > > s;
    int count =0;
	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
		
			///	cout<<arr[i]<<" "<<arr[j]<<endl;
			    auto  var = arr[i] * arr[j];
			    auto variable = k/var;
			    auto key = upper_bound(arr.begin()+1,arr.begin()+1+n,variable)-arr.begin()-1;
			    if(key> j)
			    {
			      count += (key-j);	
				}
		}
	}
	cout<<count;
	return 0;
//	cout<<s.size();
}
