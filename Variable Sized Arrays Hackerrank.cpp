#include<bits/stdc++.h>
using namespace std;

int main()
{
	int  n,k;
	cin>>n>>k;
	int** arr = new int*[n];
	for(int i=0;i<n;i++)
	{
	     int b;
	     cin>>b;
	     int *a = new int [b];
	     for(int j=0;i<b;j++)
	     {
	        int ee;
	        cin>>ee;
	        a[j]=ee;
		 }
		 *(arr+i) = a;
	}
	while(k--)
	{
		int a,b;
		cin>>a>>b;
		cout<<arr[a][b]<<endl;
	}
}
