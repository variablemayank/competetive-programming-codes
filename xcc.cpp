#include <bits/stdc++.h>

using namespace std;
#define ll long long 
#define MOD 1000000007
ll fast_exp(long base, long exp) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res;
}

long main(){
    long n;
    cin >> n;
    vector<long> calories(n);
    for(long calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
    sort(calories.rbegin(),calories.rend());
    //cout<<calories[0];
    long long unsigned  sum=0;
    for(long i=0;i<n;i++)
    {
    	sum+= calories[i]*pow(2,i);
	}
	cout<<sum<<endl;
    return 0;
}

