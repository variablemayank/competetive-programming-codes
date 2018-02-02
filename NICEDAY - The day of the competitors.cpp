#include <bits/stdc++.h>
using namespace std;
int tree[100009];
void update(int pos,int val,int MAX)
{
    while(pos <= MAX)
    {
        tree[pos] = min(tree[pos] , val);
        pos += (pos & -pos);
    }
}
int read(int pos)
{
    int check = INT_MAX;
    while(pos)
    {
        check = min(tree[pos] , check);
        pos -= (pos & -pos);
    }
    return check;
}
struct data
{
    int first,second,third;
};
bool cmp(const data &a , const data &b)
{
    return a.first == b.first ? (a.second == b.second ? a.third < b.third : a.second < b.second ) : a.first < b.first;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        data arr[n+9];
        for(int i=0;i<n;i++)
            scanf("%d%d%d",&arr[i].first,&arr[i].second,&arr[i].third);
        sort(arr,arr+n,cmp);
        //for(int i=0;i<n;++i){
        //	cout<<arr[i].first<<" "<<arr[i].second<<" "<<arr[i].third<<endl;
		//}
        fill(tree,tree + n + 9 , INT_MAX);
        int res = 0;
        for(int i =0; i<n ; i++)
        {
            int curr = read(arr[i].second);
           // cout<<curr<<endl;
            if(curr > arr[i].third)
                res++;
            update(arr[i].second,arr[i].third,n+9);
        }
        printf("%d\n",res);
    }
    return 0;
}
