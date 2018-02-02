#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	int len = s.length();
	string second = s;
	int var =97;
	for(int i=0;i<len-1;i++)
	{
       if(second[i]==second[i+1]) second[i];
    }
    cout<<second<<endl;
	cout<<endl;
    return 0;
}
