 #include<bits/stdc++.h>
 using namespace std;
 
 
 int arr[1000006];;
 int main()
 {
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		int n;
 		cin>>n;
 		for(int i=0;i<n;i++) cin>>arr[i];
 		
 		sort(arr,arr+n);
 		
 	    for(int i=n-1;i>=0;i--)
 	    {
 	       if(arr[i]==arr[i-1])
			continue;
			else
	       {
	       	cout<<arr[i-1]%arr[i]<<endl;
	       	break;

			} 
		}
	}
 }
