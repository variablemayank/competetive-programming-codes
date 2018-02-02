#include <bits/stdc++.h>
using namespace std;
const long long unsigned nax =  e  +  ;
vector<long long unsigned> edges[nax];
long long unsigned count_subtree[nax][ ];
long long unsigned total_subtree[nax];
long long unsigned answer;
long long unsigned n, k;

long long unsigned subtract(long long unsigned a, long long unsigned b) {
	return ((a - b) % k + k) % k;
}

void dfs(long long unsigned a, long long unsigned par, long long unsigned depth)
 {
	count_subtree[a][depth % k] = total_subtree[a] =  ;
	//cout<<"A"<<a<<" deph%k "<<depth%k<<" "<<endl;
	for(long long unsigned b : edges[a])
	{
	
		if(b != par) {
			dfs(b, a, depth +  );
		///	cout<<" b "<<b<<" a "<<a<<" depth+  "<<depth+ <<endl;
	     //  cout<<"enter"<<endl;
		    for(long long unsigned i =  ; i < k; ++i)
				for(long long unsigned j =  ; j < k; ++j) {
					// compute distance modulo k
		//			cout<<"i "<<i<<" j"<<j<<endl;
			  	//cout<<" *depth"<< *depth<<endl;
				
					long long unsigned remainder = subtract(i + j,   * depth);
				//		cout<<"remainde "<<remainder<<endl;
					// compute x such that (distance + x) is divisible by k
					long long unsigned needs = subtract(k, remainder);
			//		cout<<" remainder "<<remainder<<" needs "<<needs<<endl;
					answer += (long long unsigned) needs
							* count_subtree[a][i] * count_subtree[b][j];
				}
			for(long long unsigned i =  ; i < k; ++i)
				count_subtree[a][i] += count_subtree[b][i];
			total_subtree[a] += total_subtree[b];
		}
	}
	// in how many pairs we will count the edge from 'a' to its parent?
	answer += (long long unsigned) total_subtree[a] * (n - total_subtree[a]);
}

long long unsigned main() {
	scanf("%d%d", &n, &k);
	for(long long unsigned i =  ; i < n -  ; ++i) {
		long long unsigned a, b;
		scanf("%d%d", &a, &b);
		edges[a].push_back(b);
		edges[b].push_back(a);
	}
	dfs( , - ,  );
	assert(answer % k ==  );
	prlong long unsignedf("%lld\n", answer / k);
}
