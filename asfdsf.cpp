#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
	
	string s; int arr[26]={0},n;
	cin>>s;
	cin>>n;
	int len =s.length();
	for(int i=0;i<len;i++) arr[s[i]-97]++;
	int count =0;
    for(int i=0;i<26;i++)
    {
    	
    	
    	if(arr[i]>n)
    	{ 
    	   while(arr[i]>n)
    	   {
		   
    		arr[i]= arr[i]-n;
    		count++;
    	   }
		}
		if(arr[i]!=0 && arr[i]<=n) count++;
	}
	cout<<count<<endl;
	}
}
