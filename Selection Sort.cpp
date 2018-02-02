#include<bits/stdc++.h>
using namespace std;
vector<int> v(100);

int t;
void sort()
{
	int minimum;
	for(int i=0;i<t-1;i++)
	{
	 minimum =i;
		for(int j=i+1;j<t;j++)
		{
			if(v[j]<v[minimum])
			{
			 minimum=j;
			}
		}
		swap(v[i],v[minimum]);
	}
}

int main()
{
     cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>v[i];
	}
	sort();
	for(int i=0;i<t;i++) cout<<v[i]<<" ";
	cout<<endl;
}
