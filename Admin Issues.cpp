#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define all(x) x.begin(),x.end()
typedef pair<int,int> vii;
bool comp(pair<int,int>a,pair<int,int>b)
{
	return a.second<b.second;
}


int main()
{
	int n,q;
	cin>>n>>q;
	
		int arr[100][100];
		vector<pair<int,int> >v;
		int A[1000];int B[1000];
	for(int i=0;i<n;i++)
	{
	
		for(int j=0;j<q;j++)
		{
			cin>>arr[i][j];
			
		}
		B[i]=arr[i][q-1];
		int lowerbound =abs(arr[i][0]-arr[i][q-1]);
		v.push_back(make_pair(i,lowerbound));
	}
    (all(v),comp);
	for(int i=0;i<n;i++) cout<<v[i].first<<" "<<v[i].second<<" ";
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			
		}
    }
}
