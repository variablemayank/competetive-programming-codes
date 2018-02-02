#include<bits/stdc++.h>
using namespace std;

vector<int>v(1000000,-1);


int fact(int x)
{
	
	if(x<=1) return x;
	
	if(v[x]!= -1)  return v[x];
	else
	{
		v[x]=  fact(x-1)+fact(x-2);
	}


}
int main()
{

	fact(100);
	long long sum=0;
    for(int i=3;v[i]<4000000;i++)
	{
		//cout<<v[i]<<" ";
		if(v[i]%2==0 &&v[i]<4000000)
		sum+=v[i];
	}
  cout<<sum<<endl;
}
