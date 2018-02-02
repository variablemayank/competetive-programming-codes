#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int sumx=0,sumy=0,sumz=0;
	while(n--)
	{
		int x,y,z;
		cin>>x>>y>>z;
	    sumx+= x; sumy+=y;sumz+=z;
//	    	cout<<sumx<<" "<<sumy<<" "<<sumz<<endl;
	}

	if(sumx==0 && sumy==0 &&sumz==0)puts("YES");
	else puts("NO");
}
	
