#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
	int left =0;
	int right= s.length()-1;
	bool flag = false;
	while(left<=right)
	{
		if(s[left]==s[right])
		{
			left++;
			right--;
		}
	    else
		{
			flag = true;
		    break;
		}
	}
	if(flag == true)
	return false;
	else return true;
}

int main()
{
      string s;
      cin>>s;
      vector<string> vec[4];
      int count =0;
      for(int i=0;i<s.size();i++)
      {
	      	for(int j=i+1;j<s.size();j++)
	      	{
		      	   	string str = s.substr(i,j);
		      	   	cout<<str<<endl;
		      	   	if(check(str))
		      	   	{
		      	   		count++;
		      	   	    vec[str.length()].push_back(str);	
					}
		    }
	  }
	  cout<<count<<" ";
	  for(int i=2;i<=sizeof(vec);i++)
	  {
	  	cout<<vec[i].size()<<" ";
	  }
	  return 0;
}
