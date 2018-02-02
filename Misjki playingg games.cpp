#include<bits/stdc++.h>
using namespace std;

const int N = 1e6;
int n,q;
int segtree[2*N];
void build()
{
    for(int i=n-1;i>0;--i) segtree[i<<1]+segtree[i<<1|1];
} 
int query(int l, int r)
{
      int res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res += segtree[l++];
    if (r&1) res += segtree[--r];
  }
  return res;
}
int main()
{

	
	scanf("%d%d",&n,&q);
	for(int i=0;i<n;i++)
	{
	   cin>>segtree[i];
	}
	
	
	for(int i=0;i<q;i++)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		
	    build();
	   int sum= query(l-1,r);
	    cout<<sum<<endl;
	    if(sum%2==0) printf("Mishki\n");
	   else printf("Hacker\n");
	}
 
}
