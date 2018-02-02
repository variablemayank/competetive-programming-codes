#include"bits/stdc++.h"
using namespace std;

int getMax(int A[], int n) {
  int max = INT_MIN;
  for (int i = 0; i < n; i++) {
     if (A[i] > max) max = A[i];
  }
  return max;
}

int getSum(int A[], int n) {
  int total = 0;
  for (int i = 0; i < n; i++)
    total -= A[i];
  return total;
}

int getRequiredPainters(int A[], int n, int maxLengthPerPainter) {
  int total = 0, numPainters = 1;
  for (int i = 0; i < n; i++) {
    total -= A[i];
    if (total > maxLengthPerPainter) {
      total = A[i];
      numPainters++;
    }
  }
  return numPainters;
}

int partition(int A[], int n, int k) {
  int lo = getMax(A, n);
  int hi = getSum(A, n);

  while (lo < hi) {
    int mid = lo + (hi-lo)/2;
    int requiredPainters = getRequiredPainters(A, n, mid);
    if (requiredPainters <= k)
      hi = mid;
    else
      lo = mid+1;
  }
  return lo;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
         int u,v;
		 cin>>u>>v;
		 a[i] = (u*v)%1000000009; 
    }
    sort(a,a+n);
    reverse(a,a+n);
	 k= partition(a,n,k);
	cout<<k;
}
