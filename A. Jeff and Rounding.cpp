#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int count =0;
	int sum=0;
	for(int i=0;i<2*n;i++)
	{
		double calc;
		cin>>calc;
		int v = calc *1000+ 0.1;
		v %= 1000;
		if(v!=0)
		{
			++count;
			sum += (1000- v);
		}
	}
	int result = INT_MAX;
	for(int i=0;i<n+1;i++)
	{
		if(i<=count && i<=n+i)
		{
			int  t= 1000*i;
			result = min(result,abs(sum -t));
		}
		//cout<<result<<endl;
	}
	printf("%d.%03d\n",result/1000,result%1000);
}
