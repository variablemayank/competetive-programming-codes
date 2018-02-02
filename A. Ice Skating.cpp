#include<bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for (int i = a; i <= b; i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int parent[1003];
int arr[1003];
int brr[1003];

void init()
{
	REP(i,1,1005) parent[i] =i; 
}
int get(int x)
{
    if( x==parent[x]) return x;
    return (parent[x] = get(parent[x]));
}
void merge(int x,int y)
{
	x = get(x);
	y = get(y);
	if(x!=y)
	{
		parent[x] = y;
	}
}
void solve()
{
	int n;
	cin>>n;
	init();
	REP(i,1,n)
	{
		 cin>>arr[i]>>brr[i];
    }
    REP(i,1,n)
    REP(j,i+1,n)
    {
      	if(arr[i]==arr[j] || brr[i] == brr[j])
        {
      	   merge(i,j);	
		}
	}
	set<int> component;
	REP(i,1,n)
	{
	  component.insert(get(i));
	}
	cout<<component.size()-1<<endl;
}
int main()
{
	solve();
	return 0;
}
