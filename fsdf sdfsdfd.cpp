#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
  int t; cin>>t;
  vector<int>v1;
  for(int i=0;i<t;i++) 
  {
  	int k; cin>>k;
  	v1.push_back(k);
  }
  
  vector<int>vec1(v1);
  
  sort(vec1.begin(),vec1.end());
  
  for(int i=0;i<t;i++)
  {
  	for(int j=0;j<t;j++)
  	{
  	   if(v1[i]==vec1[j]) cout<<j+1<<" ";
  	   
  	} 
  }
  
    return 0;
}

