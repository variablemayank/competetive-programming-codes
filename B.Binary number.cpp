#include<bits/stdc++.h>
using namespace std;

int main()
{
	 string s;
	 cin>>s;
	 int len =s.length();
	 int ans=0;
	 while(s[len-1]=='0')
	 {
	 	 ans++;
	 	 len--;
	 }
	 if(len==1)   // 100 then ans  will be no of zeroes 
	 {
	 	return cout<<ans,0;
	 }
	 
     for(int i=0;i<len;i++)
     {
     	if(s[i]=='0') ans++;
	 }
	 cout<<ans+len+1<<endl;
}
