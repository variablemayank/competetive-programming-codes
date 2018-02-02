#include<bits/stdc++.h>
using namespace std;

int main()
{
     char str[1003]; char c; int t;
     
     scanf("%s",str+1);
     cin>>c>>t;
     int len = strlen(str+1);
     //Ist part //
     if(t==1)  // if the value to be inserted substring is one
     {
     	bool flag= false;  // from starting to end if the string doesn't contain the char c we searching for 
     	                  // then the output will be the length of the string s 
     	                  // beacause we have to find the max index so for one element substring it will be len
     	 
        for(int i=1;i<=len;i++)
		{
		   if(str[i]==c) flag = true;  // if there exists a substring of length 1 then answer will be -1
		   
		}  
		  if(flag== true) return cout<<"-1",0;
		   else return cout<<len,0;	               
	 }
	 
	 //2nd part// 
     int freq[1003] = {0};
	 if(str[1]==c) freq[1] =1;   // we are counting the freq of the char c we are searching from index 0 to the 1  
	 else freq[1] = 0;         //  if ddn is a string then the no of "d" from 0 to 1 is 1 from 0 to 2 is 2 and 0 to 3 is also 2
	 for(int i=2;i<=len;i++)
	 {
	 	freq[i] = freq[i-1];
	 	if(str[i]==c) freq[i]++;
	 }
	 int maxim=0;
	 for(int i=t;i<=len;i++)
	 { 
	     maxim = max(maxim,freq[i] - freq[i-t]);
	 }	 
     
     int ans =-1;
     for(int i= t-1;i<=len;i++)
     {
     	int Z = freq[i] - freq[i-(t-1)];
     	  Z = Z+1;
     	  if(Z == maxim+1)   // the soln is the increase the Z by 1
		   ans = i; 
	 }
	 cout<<ans;
}
