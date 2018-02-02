#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int arr[10000];
    int i=0;
    while(cin>>arr[i++] && arr[i]!='\0')
    sort(arr,arr+i);
    cout<<i;
    for(int j=0;j<i;j++) cout<<arr[i];
}
