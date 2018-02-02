#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	int A[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int loc=0,l=0,item;
	cout<<"enter the item";
	cin>>item;
	A[n+1]=item;
	while(A[l]!=item)
	{
		loc=loc+1;
		l++;
	}
	if(A[loc]==A[n+1]) 
	{
	cout<<"FOund";}
	else 
	{
	cout<<"nott found";}
	return 0;
	
	
}
