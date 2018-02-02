#include<bits/stdc++.h>
using namespace std;


const int maxi = 10000;
const int sqrsize = 100;

int arr[maxi];  // original array 
int block[sqrsize]; // decomposed array;
int blocksize;  // block size

void update(int idx,int val)
{
	int blocknumber = idx/blocksize;
	block[blocknumber] +=val - arr[idx];
	arr[idx] = val;
}

int query(int l,int r)
{
	int sum =0;
	while(l<r && l%blocksize!=0 && l!=0)
	{
		sum+= arr[l];
		l++;
	}
	while(l+blocksize<=r)
	{
		sum+= block[l/blocksize];
		l+= blocksize;
	}
	while(l<=r)
	{
		sum+= arr[l];
		l++;
	}
	return sum;
}

void preprocess(int input[],int n)
{
	int blockindex = -1;
    blocksize = sqrt(n);
    for(int i=0;i<n;i++)
    {
    	arr[i] = input[i];
    	if(i%blocksize==0)
    	{
    		blockindex+=1;
		}
		block[blockindex] += arr[i]; 
	}
}

int main()
{
  int input[] = {1,5,2,4,6,1,3,5,7,10};
  int n = sizeof(input)/sizeof(input[0]);
  preprocess(input,n);
  cout << "query(3,8) : " << query(3, 8) << endl;
    cout << "query(1,6) : " << query(1, 6) << endl;
    update(8, 0);
    cout << "query(8,8) : " << query(8, 8) << endl;
  
}
