#include<bits/stdc++.h>
using namespace std;

int main()
{
     string s;
     
     while(cin>>s)
     {
     	int len =s.length();
     	if(len%2==0)
     	{
     		int j=0;
     		int sum =0;
     		 for(int i=0;i<len/2;i++)
     		 {
     		   	sum += (s[i]-'0')*pow(10,j++);
			 }
			 int sum2=0;
			 for(int k=len/2;k<len;k++)
			 {
			 	sum2 += (s[k]-'0')*pow(10,j++);
			 }
			 cout<<sum<<sum2;
		 }
		 else
		 {
		 	cout<<"false\n";
		 }
	 }
}
