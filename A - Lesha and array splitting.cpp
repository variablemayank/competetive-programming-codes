#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> a(n);
	long long sum = 0;
	for (int i=0;i<n;i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	if (sum != 0) {
		puts("YES");
		puts("1");
		printf("%d %d\n", 1, n);
		exit(0);
	}
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (sum != 0) {
			puts("YES");
			puts("2");
			printf("%d %d\n", 1, i + 1);
			printf("%d %d\n", i + 2, n);
			exit(0);
		}
	}
	puts("NO");
}
