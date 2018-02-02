#include<iostream>
using namespace std;
string s[10000];
int main()
{
	int n,mini=6;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		    int count =0;
		    for(int k=0;k<6;k++)
		    {
		       if(s[i][k]!=s[j][k]) count++;
		    	
			}
			mini = min(mini,(count-1)/2);mini = min(mini,(count-1)/2);
		}
	}
	cout<<mini;
}
