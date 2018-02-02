#include <cstdio>
#include <cstring>
#include <iostream>
#include <memory.h>
#include <algorithm>
using namespace std;

#define C 2010000
#define lastprime 60000

struct LLNum {
	int a[111 + 5];
	int len;
} N;

char s[1000 + 5], ret[1000 + 5];
int i, j, pn, p[C + 10], Tn, wn, ls;
long long w[200000 + 10];
bool sieve[C + 10];

bool divisible (LLNum &N, int a) {
	int mod = 0;
	for(int i = 0; i < N.len; i++) mod = (mod * 1000000000LL + N.a[i]) % a;
	return (mod == 0);
}

void divide (LLNum &N, int a) {
	LLNum ret;
	ret.len = 0;
	memset(ret.a, 0, sizeof(ret.a));
	long long mod = 0;
	bool fl = 0;
	for(int i = 0; i < N.len; i++) {
		mod = mod * 1000000000LL + N.a[i];
		if (fl || mod >= a) {
			fl = 1;
			ret.a[ret.len++] = mod / a;
			mod %= a;
		}
	}
	N = ret;
}

LLNum toLLNum (char * s, int ls) {
	LLNum ret;
	ret.len = 0;
	memset(ret.a, 0, sizeof(ret.a));
	for(int i = 0; i < ls; i++) {
		ret.a[ret.len] = ret.a[ret.len] * 10 + s[i] - '0';
		if ((ls - i - 1) % 9 == 0 && i + 1 != ls) ++ret.len;
	}
	++ret.len;
	return ret;
}

void solve_small () {
	wn = 0;
	long long N = 0;
	for(i = 0; i < ls; i++) N = 10 * N + s[i] - '0';
	for(int i = 1; i <= pn && N >= p[i] * p[i]; i++) 
		while (N % p[i] == 0) {
			w[++wn] = p[i];
			N /= p[i];
		}
	if (N > 1) {
		w[++wn] = N;
	}
	printf("%d\n", wn);
	for(int i = 1; i <= wn; i++)
		printf("%lld\n", w[i]);
}

int main (int argc, char * const argv[]) {
	
	for(i = 2; i * i <= C; i++) 
		if (!sieve[i]) {
			j = i * i;
			while (j <= C) {
				sieve[j] = true;
				j += i;
			}
		}
	
	for(i = 2; i <= C; i++) 
		if (!sieve[i]) {
			++pn;
			p[pn] = i;
		}
	
	scanf("%d", &Tn);
	gets(s);
	while (Tn--) {
		gets(s);
		ls = strlen(s);
		if (ls < 18) {
			solve_small();
			continue;
		}
		
		N = toLLNum(s, ls);
		
		wn = 0;
		for(i = 1; p[i] < lastprime; i++) 
			while (divisible(N, p[i])) {
				++wn;
				w[wn] = p[i];
				divide(N, p[i]);
			}
		if (N.len == 1 && N.a[0] == 1) {
			cout << wn << endl;
			for(i = 1; i <= wn; i++) printf("%lld\n", w[i]);
		} else {
			cout << wn + 1 << endl;
			for(i = 1; i <= wn; i++) printf("%lld\n", w[i]);
			printf("%d", N.a[0]);
			for(i = 1; i < N.len; i++) printf("%.9d", N.a[i]);
			puts("");
		}
	}
    return 0;
}
