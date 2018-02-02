#include<bits/stdc++.h>
using namespace std;
int A[1000];
int partition(int start,int end)
{ 
    int val = A[end];
    int  i =start-1;
    for(int j=start;j<end;j++)
    {
    	if(A[j]<=val)
    	{
    		i=i+1;
    		swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[end]);
	return i+1;
}
int quicksort(int start,int end)
{
	if(start<end)
	{
		int mid = partition(start,end);
		quicksort(start,mid-1);
		quicksort(mid+1,end);
	}
}
int main()
{
	int t;cin>>t;
	for(int i=0;i<t;i++) cin>>A[i];
	quicksort(0,t-1);
	for(int i=0;i<t;i++) cout<<A[i]<<" ";
}
