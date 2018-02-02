#include<iostream>
using namespace std;
long long signed divisors(long long  signed x) {
    long long signed limit = x;
    long long  signed  numberOfDivisors = 0;

    if (x == 1) return 1;

    for (long long  signed i = 1; i < limit; ++i) {
        if (x % i == 0) {
            limit = x / i;
            if (limit != i) {
                numberOfDivisors++;
            }
            numberOfDivisors++;
        }
    }

    return numberOfDivisors;
}
int main()
{
	long long  signed t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		m=divisors(n);
		cout<<m<<endl;
	}
	return 0;
}


