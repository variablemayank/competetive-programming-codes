#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++) cin>>arr[i];
	//sort(arr,arr+t);
	//int count =0;
//	int sum =0;
	//bool check[t] = {false};
	long sum =0,prev =1;
	long tablets[t];
	tablets[0] =1;
	for(int i=1;i<t;i++)
	{
		if(arr[i]>arr[i-1])
		{
		  tablets[i]  =tablets[i-1]+1;
		}
		else 
		tablets[i] =1; 
	}
	for(int i= 0;i<t-1;i++)
	{
		if(arr[i]>arr[i+1] && tablets[i] <=tablets[i+1])
		{
			tablets[i] = tablets[i+1]+1;
		}
    }
  	for(int i=0;i<t;i++) sum+=tablets[i];
	cout<<sum<<endl;
}
