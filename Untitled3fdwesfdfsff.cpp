#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int m,x,y;
	char A[100];
	cin.getline(A,100);
    m=strlen(A);
	std::stoi(A); 
     for(int i=0;i<m;i++)
     {
     	if(A[i]==0)
     	{
     		x++;
     		
		 }
		 if(A[i]==1)
		 {
		 	y++;
		 }
	 }
	 if(x==6||y==6)
	 {
	 	cout<<"true";
	 }
	 else 
	 {
	 	cout<<"false";
	 }
	 return 0;	 

}
