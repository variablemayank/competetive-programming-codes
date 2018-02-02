	/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (ll i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define PB push_back
	#define MP make_pair
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    
    const int mod = 1000000007;
	const int maxi =1005;

	int arr[maxi];
	int brr[maxi];
	int crr[maxi];
	int n,m,k;
	
	int main()
	{
		int N, M; cin >> N >> M;
	 vector<int> p(N);
	 REP(i,0,N-1) p[i] = i;
	 int prev = 0;
	 while (M--)
	 {
		int i;
		for (i = 0; p[i] != prev; i++);
		int x; cin >> x;
		i = (i + x) % N;
		cout << p[i] + 1 << ' ';
		prev = p[(i + 1) % N];
		N--;
		p.erase(p.begin() + i);
	}
	cout << endl;
		
	}
