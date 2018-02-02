#include<bits/stdc++.h>
using namespace std;

class RepeatNumberCompare
{
	public:
	string compare(int x1, int k1, int x2, int k2)
	{
	      string s1,s2,s3,s4;
	    for(int i=0;i<k1;i++)
	    {
	     s1 += x1;
	     }
	     for(int i=0;i<k2;i++)
	     {
	     s2+=x2;
	     }
	    if(s1<s2) cout<<"LESS";
	    else if(s1>s2) cout<< "Greater";
	    else cout<< "Equal";
	}
	
};

int main()
{
  RepeatNumberCompare obj;
  obj.compare(1234,3,70,4);
}
