#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// reused code :)
int base =1e9+7;
inline int powmod(int x, int t, int base)
{
	if (!t) {
		return 1 % base;
	}
	int y = powmod(x, t / 2, base);
	y = (long long)y * y % base;
	if (t & 1) {
		y = (long long)y * x %base;
	}
	return y;
}
 
 
int main(){
 
		int n,k;
		cin>>n>>k;
		int ans=(ll)powmod(n,n-2,base)*powmod(n-1,(k-1)*n,base)%base*powmod(k, k * n - 2, base) %base;
		cout<<ans<<endl;
		
	}
