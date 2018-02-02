#include<bits/stdc++.h>
using namespace std;
int main()
{
	 long long arr[] = {1508524, 184851, 228753768, 1890127258, 23161, 12673};
	long long  a= 0;
	for(int i=0;i<6;i++)
	{
		  a =__gcd(a,arr[i]);
	}
	//cout<<a;
	long long  b=0;
	for(int i=0;i<6;i++)
	{
           b = b^ arr[i];		
	}
	//cout<<a<<endl;
	//cout<<b<<endl;
	//cout<<endl;
	//cout<<a*b;
	a = 36614981%23;
	cout<<a;
}
