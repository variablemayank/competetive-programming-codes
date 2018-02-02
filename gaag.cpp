#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int  n,k; 
		int  arr[10]={0};
		cin>>n>>k;
		char s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		for(int i=0;i<n;i++) arr[s[i]-'0']++;
		//for(int  i=0;i<10;i++) cout<<arr[i];
		int  sum =1;
		for(int i=0;i<k;i++)
		{
			for(int i=0;i<10;i++)
			{
				sum *= arr[i]+1;
				
			}
		}
		cout<<sum<<endl;
	}
}
