				#include<bits/stdc++.h>
				using namespace std;
				 
				
				#define csl ios_base::sync_with_stdio(false); cin.tie(NULL)
				#define mp make_pair
				#define fst first
				#define snd second
				 
				long long t, n, m, u, v, q, k;
				const int N = 2e5 + 500;
				const long long mod = 1e9 + 7;
				const long long INF = 1LL << 60LL;
				 
				
				int arr[15] ={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
				vector <int> primes;
				void pre() 
				{
				    for(int i=0;i<15;i++)
				    {
				    	primes.push_back(arr[i]);
				    	
					}
				}
				long long pred(long long mid) 
				{
				   long long res = 0;
				   for (int i = 1; i < (1 << primes.size()); ++i) 
				   {
				      long long has = 1;
				      int cnt = 0;
				      for (int j = 0; j < primes.size(); ++j) 
					  {
				         if ((1 << j) & i)
						  {
				            cnt++;
				            has = has * primes[j];
				            if (has > INF) has = INF;
				         }
				      }
				      if (cnt % 2 == 0) res -= (mid / has);
				      else res += (mid / has);
				      if (res > INF) res = INF;
				   }
				   return res;
				}
				int main() {
					
					
				   cin >> t;
				   pre();
				   cout << primes.size() << '\n';
				   while (t--) {
				      cin >> n;
				      long long lo = 2, hi = 10;
				      while (lo < hi) {
				         long long mid = (lo + hi) / 2LL;
				       //  cout<<"mid becomes "<<mid<<endl;
				         if (pred(mid) >= n) hi = mid;
				         else lo = mid + 1;
				      }
				      cout << lo << '\n';
				   }
				   return 0;
				}
