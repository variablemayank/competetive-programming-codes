#include<bits/stdc++.h>
using namespace std;

int main()
{
	float  val;
	while(cin>>val && val!=0.00)
	{
		float  sum =0.00;
		int n=0;
		while(sum<val)
		{
			n++;
			sum+= (1.00)/(1.00+n);
		}
		cout<<n<<" card(s)\n";
	
	}
}
