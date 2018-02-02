#include<bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for (int i = a; i <= b; i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main()
{
 for(int i=1;i<=100000;i++)
 {
 	 for(int j=i+1;j<=100000;j++)
 	 {
 	  for(int k= j+1;k<=100000;k++)
 	  {
	   
 	 	 if(i^j^k == i^j^i)
 	 	 cout<<i<<" "<<j<<" "<<k<<endl;
 	 }
	  }
 }
}
