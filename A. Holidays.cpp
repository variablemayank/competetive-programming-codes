#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<(n/7)*2+bool(n%7==6)<<" "<<(n/7)*2+min(2,n%7);
    return 0;
}
