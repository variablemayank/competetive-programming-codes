#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t,a,b,c,d,j,k,m,l;
      cin>>t>>a>>b>>c>>d;
      long long count =0;
      for(int i=1;i<=t;i++)
      {
      	 int j= i+b-c;
      	 int k= i+a-d;
      	 int l = k+b-c;
      	 if((j>=1 && j<= t) && (k>=1 && k<=t) && (l>=1 && l<=t)) count++;
	  }
	  count = count *t;
	  cout<<count;
	  return 0;
}
