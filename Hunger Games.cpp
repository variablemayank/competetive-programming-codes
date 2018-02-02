#include <iostream>
#include <algorithm>
using namespace std;
int function (int a,int b,int c, int arr[ ])
{
	for (int e=0; e<c;e++)
	{
	sort (arr, arr+a);
	for (int d=0; d<a; d+2)
	{
		arr[d]=arr[d]^c ;
	}
	}
	return arr[0], arr[a] ;
}
int main() {
	int a,b,c,arr[100000] ;
	cin >> a >> b >> c ;
	for ( int d=0; d<a; d++)
	{
		cin >> arr[d];
	}
	cout << function ;
	// your code goes here
	return 0;
}
