#include<iostream>
#define gc getchar_unlocked
using namespace std;

int read()
 { 
 
 
 char c = gc(); 
 while(c<'0' || c>'9')
  c = gc(); int ret = 0;
   while(c>='0' && c<='9') 
   { ret = 10 * ret + c - 48; c = gc(); } return ret; }
    int main() 
	{ int t; t = read();
	 while(t--)
	  { int n;
	   n= read();
	    int num 
		,a[n];
		 int count[1000005]={0},
		 c=0;
		  for(int i=0;i0)
		   { count[a[i]]--;
		    } else { c++;
			 } } cout<<c<<"\n"; } 


