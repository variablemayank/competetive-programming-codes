#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   getline(cin,s);
   for(int i=0;i<s.size();i++)
   {
   	  if( s[i]==' ' && s[i+1] == ' ')
   	  { 
   	     for(int j = i+2;j<s.size()-1;j++)
   	     {
   	         s[j-1] = s[j];
   	         if(s[j]==' ')
   	         {
   	              break;	
			 }
		 }
	  } 
   }
    cout<<s;
}
