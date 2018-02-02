	#include<bits/stdc++.h>
	using namespace std;
	int main(){
		char s[1000];
		int mod=1000000007;
		scanf("%s", s);
		int N= (s[0]=='1'? 1:0);
		cout<<"N on basis of first position is "<<N<<endl;
		for(int i=1; s[i]; i++){

			N=(2*N+(s[i]=='1'? 1:0))%mod;
			cout<<"N modified on "<<i<<" is "<<N<<endl;
		}
		for(int i=1; s[i]; i++)
			N=(2*N)%mod;
		printf("%d\n",N);
		return 0;
	}
