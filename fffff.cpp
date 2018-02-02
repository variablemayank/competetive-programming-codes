#include <iostream>
using namespace std;
 
void heapify(long long int* arr, int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] < arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] < arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
 
// main function to do heap sort
long long int* heapSort(long long int* arr, int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
    return arr;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,q;
		cin>>n>>q;
		long long int* l = new long long int[n];
		long long int k[q];
		for(int j=0;j<n;j++)
		{
			cin>>l[j];
		}
		l=heapSort(l,n);
 
		for(int j=0;j<q;j++)
		{
			cin>>k[j];
			int last=n-1;
			int count=0;
			for(int x=0;x<=last;x++)
			{
				if(l[x]<k[j])
				{
					while(l[x]<k[j] && last>x)
					{
						l[x]++;
						last--;
 
					}
					if(last<=j){break;}
					if(l[x]==k[j]){count++;}
				}
				else{count++;}
			}
 
		}
	}
	return 0;
}
