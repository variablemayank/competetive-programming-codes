#include <iostream>
#include <algorithm>
 
using namespace std;
 
const int MAXN = 200000;
 
int r, wn;
pair<long long, pair<long long, long long> > w[MAXN];
 
int main(int argc, const char * argv[]) {
    cin >> r;
    wn = 0;
    for(int x = 1; x <= 3.5 * r; x++)
        for(int y = x; y <= 100000; y++) 
		if ((x * y - 4LL * r * r) != 0) {
            int z = 4LL * r * r * (x + y) / (x * 1LL * y - 4LL * r * r);
            int a = (y + z) / 2;
            int b = (x + z) / 2;
            int c = (x + y) / 2;
            if (a < 1 || b < 1 || c < 1)
                continue;
            if (a > b)
                swap(a, b);
            if (a > c)	
                swap(a, c);
            if (b > c)
                swap(b, c);
            if (c >= a + b)
                continue;
            if (r * 1LL * r * 1LL * 4 * (a + b + c) == (-a + b + c) * 1LL * (a - b + c) * 1LL * (a + b - c)) {
                ++wn;
                w[wn] = make_pair(a, make_pair(b, c));
            }
        }
    
    sort(w + 1, w + wn + 1);
    wn = unique(w + 1, w + wn + 1) - (w + 1);
    
    cout << wn << endl;
    for(int i = 1; i <= wn; i++)
        cout << w[i].first << " " << w[i].second.first << " " << w[i].second.second << endl;
    return 0;
}
