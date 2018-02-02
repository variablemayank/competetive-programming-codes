#include<iostream>
#include<string.h>
using namespace std;
class palindromic
{
  int i,j;
   int n;
	char a[200];
public:
	void get()
	{
		cin>>a;
	}
	void check()
	{
		i=0;
		j=0;
		char b[200];
	    strcpy(b,a);
        int n=strlen(a);
                     for(j=n-1;j>=0;j--)
                     {
                       if(b[j]==a[i])
                        i++;
					 }
                     if(i==n)
                      cout<<"YES\n";
                     else
                       cout<<"NO\n";
    }
};
int main()
{
palindromic	e;
e.get();
e.check();
return 0;
}
