	#include <bits/stdc++.h>
	using namespace std;
	typedef pair <int,int> pi;
	
	const int MAX=1000010;
	int A[MAX];
	int X[MAX];
	pair <pi,int> Q[MAX];
	map <int,int> M;
	int R[MAX];
	
	const int N=2*MAX+10;
	int T[N];
	
	void add(int i, int d){
		for(;i<N;i+=i&(-i) ){
			T[i]= T[i] ^ d;
		}
	}
	
	int sum(int i){
		int ans=0;
		for(; i>0 ; i-= i&(-i)){
			ans = ans ^ T[i];
		}
		return(ans);
	}
	
	
	int main(){
		int n,m;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&A[i]);
		}
		for(int i=1;i<=n;i++){
			X[i]=X[i-1] ^ A[i];
		}
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			scanf("%d %d",&Q[i].first.second,&Q[i].first.first);
			Q[i].second=i;
		}
		sort(Q,Q+m);
		cout<<endl;
		for(int i=0;i<m;i++)
		{
			cout<<Q[i].first.second<<" "<<Q[i].first.first<<endl;
		}
		for(int i=1,t=0;i<=n;i++){
			if(M[A[i]]==0){
				add(i,A[i]);
			}
			else{
				add(i,A[i]);
				add(M[A[i]],A[i]);
			}
			M[A[i]]=i;
			while(true)
			{
				if(Q[t].first.first != i || t==m ) break;
				int res= X[i] ^ X[Q[t].first.second-1];
				res = res ^ ( sum(i) ^ sum(Q[t].first.second-1) );
				R[Q[t].second]=res;
				t++;
			}
		}
		for(int i=0;i<m;i++){
			printf("%d\n",R[i]);
		}
	}
