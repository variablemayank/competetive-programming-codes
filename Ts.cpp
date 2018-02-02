#include<iostream>
#include<cstdio>
#include<algorithm>
#define SGN(x) ((x)<0?-1:1) 
typedef long long LL;
using namespace std;
const int N = 200005;
LL a[N];
int n,k,x,b[N];
bool cmp(int x, int y){return abs(a[x])>abs(a[y]);}
int main() {
	cin>>n>>k>>x; int sgn=1;
	for (int i=1;i<=n;i++) {scanf("%I64d",&a[i]); sgn*=SGN(a[i]); b[i]=i;}
	make_heap(b+1,b+n+1,cmp);
	while (k--) {
	
		int tmp=sgn*SGN(a[b[1]]);
	//	cout<<tmp;
		 a[b[1]]-=tmp*x; 
		 cout<<a[b[1]];
		 sgn=tmp*SGN(a[b[1]]); 
		 pop_heap(b+1,b+n+1,cmp);
		  push_heap(b+1,b+n+1,cmp);
	}
	for (int i=1;i<=n;i++) printf("%I64d ",a[i]);
	return 0;
}
