#include<bits/stdc++.h>
using namespace std;

int arr[100005];

void build(int n,int a,int b)
{
	if(a>b) return ;
	if(a==b) 
  	{ tree[n] = arr[a];
	return;}
	int mid = (a+b)/2;
	build(node*2,a,mid); // left part
	build(node*2+1,mid+1,b); // right part
}

void update(int n, int a,int b,int i,int j ,int x,int value)
{
	if(a>b |a>j||b<i)
	return;
}
int main()
{
	int t;
    pair<int,int>p[100005];
	for(int i=0;i<n;i++)
	{
	   int a;
	   cin>>a;
	   p[i].first = a;
	   p[i].second = i+1;
	}
	sort(p,p+n);
	for(int i=0;i<n;i++)
	{
		arr[i] = p[i].first;
	}
	build(1,0,n-1);
}
