#include<iostream>
using namespace std;

int Partition(int *A,int start,int end)
{
	int pivot=A[end];
	int partitionIndex = start;
	for(int i=start;i<end;i++)
	{
		if(A[i]<=pivot)
		{
			swap(A[i],A[partitionIndex]);
			partitionIndex++;
		}
	}
	swap(A[partitionIndex],A[end]);
	return partitionIndex;
}
void Quicksort(int *A,int start,int end)
{
	if(start<end)
	{
		int partitionIndex = Partition(A,start,end);
		Quicksort(A,start,partitionIndex-1);
		Quicksort(A,partitionIndex+1,end);
		
	}
}
int main()
{
	
	int A[100],n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>A[i];
	Quicksort(A,0,7);
	for(int i=0;i<n;i++) cout<<A[i]<<" ";
}

