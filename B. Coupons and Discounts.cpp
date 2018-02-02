#include<bits/stdc++.h> 
using namespace std; 
int main(){int t;int arr[200000];cin>>t;int i;for(i=0;i<t;i++){cin>>arr[i];} for( i=0;i<t-1;i++){if(arr[i]%2==1){arr[i+1]=arr[i+1]-1;if(arr[i+1]<0){cout<<"NO\n";return 0;}}}if(i==t-1&&arr[t-1]%2==1){ cout<<"NO\n";}else cout<<"YES\n";}
