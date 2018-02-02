#include <bits/stdc++.h>
using namespace std;
int N;
pair<int, int> A[100000];
int main()
{
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d", &A[i].first), A[i].second=i;
    sort(A, A+N, greater<pair<int, int>>());
    int a=A[0].second, b=A[0].second;
    cout<<a<<" "<<b<<endl;
    int ans=0;
    for(int i=1; i<N; i++)
    {
        int x=A[i].second;
        if(x<a || x>b)
            ans++;
        else
            ans+=2;
        a=min(a, x);
        b=max(b, x);
    }
    printf("%d\n", ans);
    return 0;
}
