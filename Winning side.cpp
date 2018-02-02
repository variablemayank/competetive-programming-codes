#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pp;
vector<pp>v;
int main()
{
	int n;
	while(n--)
	{
	  int size;
	  string s;
	  int arr1[26]={0};
	  
	  int arr[1000];
	  
	  cin>>size;
	  cin>>s;
	  
	  for(int i=0;i<size;i++) cin>>arr[i];
	  
	  for(int i=0;i<size;i++) arr1[s[i]-97]++;
	 // for(int i=0;i<26;i++)
	 // {
	  	//v.push_back(make_pair(i,arr1[i]));
	  //}
	  
	   //for(int i=0;i<26;i++) cout<<v[i].first<<" "<<v[i].second<<" ";
	}
}
