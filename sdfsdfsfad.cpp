#include<bits/stdc++.h>
using namespace std;

int face(int x)
{
	if(x==0)return 1;
	return face(x-1)*x;
}
int main()
{
	
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",face(min(a,b)));
	return 0;
	
}
