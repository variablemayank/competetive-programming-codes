#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int a=0,c;
	class so{
		int d=0;
		public:
			void song()
			{
				if(d==0)
				{
					 cout<<"Play"<<c;
					 a++;d++;
				}
			}
	};

int main()
{
	randomize();
	so s[50];
	int i=0,n;
	cout<<"Enter";
	cin>>n;
	while(a!=n)
	{
		c =random(n);
		
	}
	s[c].song();
}
