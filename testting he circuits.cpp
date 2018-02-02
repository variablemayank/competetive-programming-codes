#include <bits/stdc++.h>
using namespace std;

long long  ROW;
long long  COL;

long long M[10050][50];

long long kadane(long long* arr, long long* start, long long* finish, long long n)
{
  
    long long sum = 0, maxSum = INT_MIN, i;
 
  
    *finish = -1;
 
   
    long long local_start = 0;
 
    for (i = 0; i < n; ++i)
    {
        sum ^= arr[i];
        if (sum < 0)
        {
            sum = 0;
            local_start = i+1;
        }
        else if (sum > maxSum)
        {
            maxSum = sum;
            *start = local_start;
            *finish = i;
        }
    }
 
 
   
  //  for (i = 1; i < n; i++)
  //  {
     //   if (arr[i] > maxSum)
  //      {
  //        /  maxSum = arr[i];
        //    *start = *finish = i;
   //     }/////
    //}
   return maxSum;
}
 

void findMaxSum()
{
   
    long long maxSum = INT_MIN, finalLeft, finalRight, finalTop, finalBottom;
 
    int left, right, i;
    long long  temp[ROW], sum, start, finish;

    for (left = 0; left < COL; ++left)
    {
      
        memset(temp, 0, sizeof(temp));
 
      
        for (right = left; right < COL; ++right)
        {
         
            for (i = 0; i < ROW; ++i)
                temp[i] ^= M[i][right];
 
           
            sum = kadane(temp, &start, &finish, ROW);
 
            if (sum > maxSum)
            {
                maxSum = sum;
                finalLeft = left;
                finalRight = right;
                finalTop = start;
                finalBottom = finish;
            }
        }
    }
 
    printf("%lld", maxSum);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>ROW>>COL;
    for(int i=0;i<ROW;i++)
    {
    	for(int j=0;j<COL;j++) cin>>M[i][j];
	}
 
    findMaxSum();
 
    return 0;
}

