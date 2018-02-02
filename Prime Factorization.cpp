#include<bits/stdc++.h>
using namespace std;

int factor(int N) {
vector<int> primes;
primes = eratosthenes(static_cast<int>(sqrt(N+1)));
map<int, int> factors;
for(int i = 0; i < primes.size(); ++i){
int prime = primes[i], power = 0;
while(N % prime == 0){
power++;
N /= prime;
}
if(power > 0){
factors[prime] = power;
}
}
return factors;
} 
int main()
{
	int t;
	cin>>t;
	cout<<factor(t);
	
}
