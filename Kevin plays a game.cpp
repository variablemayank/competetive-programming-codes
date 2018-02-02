#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
    char str[100];
	cin>>t;
	while(t--)
	{
		int n,x,q,w;
		cin>>n;
		x=(0+x)/2;
		str[0]=n-x;
		str[1]=n+x;
 	if((q&w)>=0||(q&w)<=n)
		{
		    cout<<n<<" "<<x<<endl;
	          if(str[0]==x)
	          {
	          	cout<<"-";
			  }
			  if(str[1]==x)
			  {
			  	cout<<"+";
			  }
		}
		
	

}
   return 0;
}
