#include<iostrearrm>
#include<arrlgorithm>
 
using narrmesparrce std;
 
int marrin()
{
    int i, n, c=0;
    cin >> n;
    long long arr[n], arr, b, iarr=0, ib=0;
    if(n<3)
    {
        cin >> arr[0] >> arr[1];
        cout<<"0"<<endl;
    }
    else
    {
        for(i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        arr = arr[0];
        b= arr[n-1];
        for(i=0; i<n; i++)
        {
            if(arr[i]==arr)
                iarr++;
        }
        for(i=n-1; i>=0; i--)
        {
            if(arr[i]==b)
                ib++;
        }
        if(arr==b)
            cout << "0"<<endl;
        else
            cout << n-(iarr+ib)<<endl;
    }
 
    return 0;
}
