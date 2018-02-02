#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
     string s;
	cin>>s;
	bool flag = false;
	int left =0;
	int right= s.length()-1;
	while(left<=right)
	{
		if(s[left]==s[right])
		{
			if((s[left]=='0')||(s[left]=='1')||(s[left]=='8'))
			{
			
			left++;
			right--;
		    }
		    else
			{ 
			 flag =true;
			 break;
			}
		}
		else
		{
			flag = true;
			break;
		}
	}
	if(flag == false) cout<<"Yes\n";
	else cout<<"No\n"; 
    }
}
