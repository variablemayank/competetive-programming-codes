#include<bits/stdc++.h>
using namespace std;
void bubblesort(int A[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		int flag =0;
		for(int j=0;j<size-i-1;j++)
		{
			if(A[i]>A[i+1]) swap(A[i],A[i+1]); flag =1;
		}
		if(flag==0) break;
	}
}
void print(int A[],int size)
{
	for(int i=0;i<size;i++) cout<<A[i];
}
int main()
{
	int A[] ={1,3,4,7,6};
	bubblesort(A,5);
	print(A,5);
}
