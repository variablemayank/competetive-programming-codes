#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *arr =  (int*)malloc(100*sizeof(int));
  
  printf("Hi Joe :D Please enter the number of element you want to store in array \n");
  
  int n,i;
  scanf("%d",&n);
 
  for(int i=0;i<n;i++)
  {
     scanf("%d",arr+i);	
  }	
  printf("Hi Your Entered n values are  \n");
  for(i=0;i<n;i++)
  {
  	printf("%d ",arr[i]);
  	
  }
  printf("\n");
  free(arr); // Deleting the memory 
   
}
