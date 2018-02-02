#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long llong;
 
const int MAXN = 250005;
llong tree[MAXN], A[MAXN], B[MAXN];
 
llong read(int idx){
 llong sum = 0;
 while (idx > 0){
  sum += tree[idx];
  idx -= (idx & -idx);
 }
 return sum;
}
 




void update(int idx ,llong val){
 while (idx <= MAXN){
  tree[idx] += val;
  idx += (idx & -idx);
 }
}
 
int main() 
{
   
   int N;
   scanf("%d",&N);
   
    int arr[250004];
      for(int i = 0; i < N; ++i) 
      {
         scanf("%lld",&arr[i]);
         A[i] =arr[i];
         B[i] = A[i];
      }
      int t;
      cin>>t;
      while(t--)
      {
         int x,y;
         cin>>x>>y;
         x--;
        A[x] = y;
         B[x] = A[x];
         memset(tree, 0, sizeof(tree));          
      sort(B, B + N);
      for(int i = 0; i < N; ++i) {
         int rank = int(lower_bound(B, B + N, A[i]) - B);
         A[i] = rank + 1;
      }
      llong inv_count = 0;
      for(int i = N - 1; i >= 0; --i) {
         llong x = read(A[i] - 1);
         inv_count += x;
         update(A[i], 1);
      }
      
      cout<<inv_count<<endl;
      for(int i=0;i<N;i++)
      A[i] = arr[i];
	  }
   }
