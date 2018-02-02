#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
		cin>>arr[i];
		for(int j=0;j<t;j++)
	{
		int count =0; 
		if(arr[j]%arr[j]==0)
			count++;
		if(count==1)
		cout<<arr[j]<<" ";
	}
	return 0;
}

