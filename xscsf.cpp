#include<bits/stdc++.h>

using namespace std;

const int mod = 1000000007;

int main()
{
     string s;
	 while(cin>>s)
	 {
	 int len =s.length();
	 string s2 =s;
	 int sum=0;
	 reverse(s.begin(),s.end());
	 for(int i=0;i<len;i++)
	 {
	 	sum += (s[i]-'0')*pow(10,i);
	 }
	 int sum1=0;
	 for(int i=0;i<len;i++)
	 {
	 	sum1 += pow((s[i]-'0'),len);
	 }
	 if(sum1==sum) cout<<"True\n";
	 else cout<<"False\n";
    }
}
