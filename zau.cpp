#include<stdio.h>
#include<string.h>
int main(){
	char zaid[100000];
	printf("enter the string ");
	scanf(" %s",zaid);
	int l=strlen(zaid);
    int r=0,c=l-1;
    if( zaid[r]== zaid[c]){
    	r++;
    	c++;
	}
	 else{
	   zaid[c]=  zaid[r];
	 }
	 for(int t=0;t<l;t++){
	 	printf("%c",zaid[t]);
	 }
	}
