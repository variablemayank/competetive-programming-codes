#include <iostream>
using namespace std;
 

long long int numberOfPaths(long long int m, long long int n)
{
    
    long long int count[m][n];
 
  
    for (long long int i = 0; i < m; i++)
        count[i][0] = 1;
 
    for (long long int j = 0; j < n; j++)
        count[0][j] = 1;
 
    for (long long int i = 1; i < m; i++)
    {
        for (long long int j = 1; j < n; j++)
 
            
            count[i][j] = (count[i-1][j] + count[i][j-1]); 
 
    }
    return count[m-1][n-1]%1000000007;
}
 

int main()
{
	long long int n,m;
	cin>>n>>m;
    cout << numberOfPaths(n, m)/2;
    return 0;
}
