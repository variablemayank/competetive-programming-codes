#include <iostream>
 
#define TRACE(x) cerr << #x << " = " << x << endl;
 
using namespace std;
 
const int MAXN = 100500;
 
int a[MAXN];
 
int main() {
	int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
       cin >> a[i];
    }
    int pom = 0;
    for (int i = 0; i < n; i++){
       pom += a[i] / k + ((a[i] % k) ? 1 : 0);
       //TRACE(pom);
    }
    int ans = pom / 2 +( (pom % 2) ? 1 : 0);
 
    cout << ans << endl;
 
	return 0;
}
