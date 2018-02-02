#include<bits/stdc++.h>
using namespace std;

const int maxi = 10000007;
vector<long long>vec(maxi);

void binary_search(int left,int right ,int key)
{
	//cout<<left<<right<<endl;
	bool flag = false;
	while(left<=right)
	{
		int mid = (left+right)/2;
		if(vec[mid]==key)
		{
			cout<<"YES ";
			cout<<mid<<endl;
			flag = true;
			break;
		}
		else if(key<vec[mid])
		{
			right = mid-1;
		}
		else
		{
			left = mid+1;
		}
	}
	if(flag == false)
	{
	
	cout<<"NO ";
	cout<<left<<endl;}
}

int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
	}
	int query;
	cin>>query;
	int dp[n] = {0};
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
    	mp.insert({vec[i],i});
	}
	while(query--)
	{
		int val;
		cin>>val;
		map<int,int> ::iterator it;
	    it = mp.find(val);
	    if(it != mp.end())
	    {
	    	cout<<"YES ";
	    	cout<<it->second<<endl;
		}
		else
		{
		
	    binary_search(0,n-1,val);
	    }
	}

}
