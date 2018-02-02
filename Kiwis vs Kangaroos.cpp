#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 ="KANGAROO";
    string s2 ="KIWIBIRD";
    
    string s;
    cin>>s;
    int len = s.length();
    int arr[26]={0};
    for(int i=0;i<len;i++)
    {
       if(s[i]>=97 && s[i]<=132)
       {
       	   s[i] =s[i]-32;
       	   arr[s[i]-65]++;
	   }
	   else
	   {
	   	arr[s[i]-65]++;
	   }
	}
	int count =0,count2=0;
	for(int i=0;i<8;i++)
	{
		count += arr[s1[i]-65];
		count2+= arr[s2[i]-65];
	}
	if(count==count2) cout<<"Feud continues\n";
	if(count>count2)
	{
		cout<<"Kangaroos"<<endl;
	}
	if(count<count2) cout<<"Kiwis"<<endl;
}
