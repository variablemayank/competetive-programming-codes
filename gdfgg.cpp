#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		int indexCount = 0;
        int valueCount = 0;
        int prefixCount = 0;

        for(int i = 0; i< n; i++){
            indexCount+= i + 1;
            valueCount += arr[i];
            if(indexCount == valueCount){
                prefixCount++;
            }
        }
        cout<<prefixCount<<endl;
	}
}
