#include<iostream>
using namespace std;
int main()
{
	int t,k=0;
	long long int  arr[1000000];
long long int arr1[1000000];
	cin>>t;
     for(int i=0;i<t;i++)
     {
     	cin>>arr[i];
     	
	 }
	 for(int j=0;j<t;j++)
	 {
	 	if(arr[j]==2)
	 	{
	 		arr1[k]=arr[j];
	 		k++;
	 		
		 }
		 if(arr[j]==3)
		 {
		 	arr1[k]=arr[j];
	 		k++;
		 }
		 if(arr[j]%arr[j]==0)
		 {
		 	arr[k]=arr[j];
		 	k++;
		 }
	 }
	 for(int m=0;m<=k;m++)
	 cout<<arr1[m];
	 return 0;
}
