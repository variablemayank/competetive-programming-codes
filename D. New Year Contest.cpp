#include<bits/stdc++.h>
using namespace std;

vector<int> arr;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int var;
		cin>>var;
		arr.push_back(var);
	}
	sort(arr.begin(),arr.end());
	
	int count=0;
	int var = 0;
	int penalty=0;
	for(int i=0;i<n;i++)
	{
	     var+= arr[i];
		if(var>710) break;
		count++;
		if(var>350) penalty+= var-350;
	}
	cout<<count<<" "<<penalty<<endl;
}
