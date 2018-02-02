#include<iostream>
using namespace std;
int main()
{
	int n;  
	int arr[10];
	string s; 
	cin>>n>>s;
	
	for(int i=0;i<n;i++) arr[s[i]-'0']++;
	
	if ((arr[1] || arr[2] || arr[3]) && (arr[7] || arr[0] || arr[9]) && (((arr[1] || arr[4] || arr[7]) && (arr[3] || arr[6] || arr[9])) || arr[0]))  
	cout<<"YES";
	else cout<<"NO\n";
}
