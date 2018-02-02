#include<bits/stdc++.h>
using namespace std;
vector<long long > v(1000000);
void sort(int size)
{
	int key,i;
	for(int j=2;j<=size;j++)
	{
		 key=v[j];
		i=j-1;;
		while(i>0 && v[i]> key)
		{
			v[i+1]=v[i];
			i--;
			v[i+1] =key;
		}
	}
		
		
	
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>v[i];
	
	sort(n);
		for(int i=1;i<=n;i++) cout<<v[i]<<" ";
		
}
