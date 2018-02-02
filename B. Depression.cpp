#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	scanf("%d:%d",&a,&b);
	if(a==12 && b==0) cout<<"0 0";
	else
	{
		double soln = (12.0/a);
	//	cout<<soln<<endl;
		soln= (360/soln);
		soln = soln+ double(b/2.0);
		if(soln>360)
		soln =soln-360;
		double ans = (60.0/b);
		ans = (360/ans);
		cout<<soln<<" "<<ans;
	}
}
