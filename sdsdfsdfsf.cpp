#include <iostream>
#include <stdio.h>
#include <cmath>
 
using namespace std;
 
int main() {
	int n, k, a, total = 0;
	float avg;
 
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		total += a;
	}
 
	avg = (float)total/n;
	cout<<round(avg);
	return 0;
}
