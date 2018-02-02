#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1,s2,s3;
	cin>>s>>s1>>s2>>s3;
	
 	if(s[0]=='x' &&s[1]=='x' &&s[2]=='.')  return cout<<"YES",0;
 	if(s[0]=='x' &&s[2]=='x' &&s[1]=='.')  return cout<<"YES",0;
 	if(s[0]=='.'&&s[1]=='x'&&s[2]=='x')  return cout<<"YES",0;
	
	 if(s[1]=='x' &&s[2]=='x' &&s[3]=='.')  return cout<<"YES",0;
	 if(s[1]=='x' &&s[2]=='.' &&s[3]=='x')  return cout<<"YES",0;
	 if(s[1]=='.' &&s[2]=='x' &&s[3]=='x')  return cout<<"YES",0;
	
	
	 if(s[3]=='x' &&s[2]=='x' && s[1]=='.') return cout<<"YES",0;
	 if(s[3]=='.'&&s[2]=='x'&&s[1]=='x')  return cout<<"YES",0;
	 if(s[3]=='x'&&s[2]=='.'&&s[1]=='x')  return cout<<"YES",0;
	
 	if(s[2]=='x'&&s[1]=='x'&&s[0]=='.')  return cout<<"YES",0;
 	if(s[2]=='x'&&s[1]=='.'&&s[0]=='x')  return cout<<"YES",0;
 	if(s[2]=='.'&&s[1]=='x'&&s[0]=='x')  return cout<<"YES",0;
	

	
 	if(s1[3]=='x' &&s1[2]=='x' && s1[1]=='.') return cout<<"YES",0;
 	if(s1[3]=='x'&&s1[2]=='x'&&s1[1]=='.')  return cout<<"YES",0;
 	if(s1[3]=='.'&&s1[2]=='x'&&s1[1]=='x')  return cout<<"YES",0;
	
 	if(s1[0]=='x' &&s1[1]=='x' &&s[2]=='.')  return cout<<"YES",0;
 	if(s1[0]=='x'&&s1[1]=='.'&&s1[2]=='x')  return cout<<"YES",0;
 		if(s1[0]=='.'&&s1[1]=='x'&&s1[2]=='x')  return cout<<"YES",0;
	
	 if(s2[3]=='x' &&s2[2]=='x' && s2[1]=='.') return cout<<"YES",0;
	 if(s2[3]=='x'&&s2[2]=='.'&&s2[1]=='x')  return cout<<"YES",0;
	 	if(s2[3]=='.'&&s2[2]=='x'&&s2[1]=='x')  return cout<<"YES",0;
	
		
     if(s2[0]=='x' &&s2[1]=='x' &&s2[2]=='.')  return cout<<"YES",0;
     if(s2[0]=='x' &&s2[1]=='.' &&s2[2]=='x')  return cout<<"YES",0;
      if(s2[0]=='.' &&s2[1]=='x' &&s2[2]=='x')  return cout<<"YES",0;
    
	
     if(s3[3]=='x' &&s3[2]=='x' && s3[1]=='.') return cout<<"YES",0;
	if(s3[3]=='x'&&s3[2]=='.'&&s3[1]=='x')  return cout<<"YES",0;
	if(s3[3]=='.'&&s3[2]=='x'&&s3[1]=='x')  return cout<<"YES",0;
	
    if(s3[0]=='.'&&s3[1]=='x'&&s3[2]=='x')  return cout<<"YES",0;
	if(s3[0]=='x'&&s3[1]=='x'&&s3[2]=='.')  return cout<<"YES",0;
    if(s3[0]=='x'&&s3[1]=='.'&&s3[2]=='x')  return cout<<"YES",0;
	
		
    if(s[0]=='x' &&s1[0]=='x' &&s2[0]=='.')  return cout<<"YES",0;
       if(s[0]=='.' &&s1[0]=='x' &&s2[0]=='x')  return cout<<"YES",0;
   if(s[0]=='x' &&s1[0]=='.' &&s2[0]=='x')  return cout<<"YES",0;
       
    if(s1[0]=='x' &&s2[0]=='x' &&s3[0]=='.')  return cout<<"YES",0;
      if(s1[0]=='x' &&s2[0]=='.' &&s3[0]=='x')  return cout<<"YES",0;
       if(s1[0]=='.' &&s2[0]=='x' &&s3[0]=='x')  return cout<<"YES",0;
      
    
      
    if(s[1]=='x' &&s1[1]=='x' &&s2[1]=='.')  return cout<<"YES",0;
    if(s[1]=='.' &&s1[1]=='x' &&s2[1]=='x')  return cout<<"YES",0;
    if(s[1]=='x' &&s1[1]=='.' &&s2[1]=='x')  return cout<<"YES",0;
    
    if(s1[1]=='x' &&s2[1]=='x' &&s3[1]=='.')  return cout<<"YES",0;
    if(s1[1]=='.' &&s2[1]=='x' &&s3[1]=='x')  return cout<<"YES",0;
        if(s1[1]=='x' &&s2[1]=='.' &&s3[1]=='x')  return cout<<"YES",0;
      
   if(s[2]=='x' &&s1[2]=='x' &&s2[2]=='.')  return cout<<"YES",0;
     if(s[2]=='.' &&s1[2]=='x' &&s2[2]=='x')  return cout<<"YES",0;
       if(s[2]=='x' &&s1[2]=='.' &&s2[2]=='x')  return cout<<"YES",0;
        
    if(s1[2]=='x' &&s2[2]=='x' &&s3[2]=='.')  return cout<<"YES",0;
   if(s1[2]=='x' &&s2[2]=='.' &&s3[2]=='x')  return cout<<"YES",0;
    if(s1[2]=='.' &&s2[2]=='x' &&s3[2]=='x')  return cout<<"YES",0;
      
   if(s[3]=='x' &&s1[3]=='x' &&s2[3]=='.')  return cout<<"YES",0;
   if(s[3]=='x' &&s1[3]=='.' &&s2[3]=='x')  return cout<<"YES",0;
   if(s[3]=='.' &&s1[3]=='x' &&s2[3]=='x')  return cout<<"YES",0;
        
    if(s1[3]=='x' &&s2[3]=='x' &&s3[3]=='.')  return cout<<"YES",0;
   if(s1[3]=='x' &&s2[3]=='.' &&s3[3]=='x')  return cout<<"YES",0;
    if(s1[3]=='.' &&s2[3]=='x' &&s3[3]=='x')  return cout<<"YES",0;
      
    if(s3[0]=='x' &&s2[0]=='x' &&s1[0]=='.')  return cout<<"YES",0;
    if(s3[0]=='x' &&s1[0]=='x' &&s2[0]=='.')  return cout<<"YES",0;
     if(s3[0]=='x' &&s1[0]=='x' &&s2[0]=='.')  return cout<<"YES",0;
      
    if(s3[1]=='x' &&s2[1]=='x' &&s1[1]=='.')  return cout<<"YES",0;
    if(s3[1]=='x' &&s1[1]=='x' &&s2[1]=='.')  return cout<<"YES",0;
      
    if(s3[2]=='x' &&s2[2]=='x' &&s1[2]=='.')  return cout<<"YES",0;
   if(s3[2]=='x' &&s1[2]=='x' &&s2[2]=='.')  return cout<<"YES",0;
      
     if(s3[3]=='x' &&s2[3]=='x' &&s1[3]=='.')  return cout<<"YES",0;
     if(s3[3]=='x' &&s1[3]=='x' &&s2[3]=='.')  return cout<<"YES",0;
      
      if(s[0]=='x' && s1[1]=='x'&&s2[2]=='.') return cout<<"YES",0;
 	 if(s[0]=='.'&&s1[1]=='x' &&s2[2]=='x')  return cout<<"YES",0;
 	 if(s[0]=='x'&&s1[1]=='.' &&s2[2]=='x')    return cout<<"YES",0; 
	 
 	 if(s1[1]=='x' &&s2[2]=='.'&&s3[3]=='x') return cout<<"YES",0;
 	if(s1[1]=='x'&&s2[2]=='x' &&s3[3]=='.') return cout<<"YES",0;
 	 if(s1[1]=='.' &&s2[2]=='x'&&s3[3]=='x') return cout<<"YES",0;
 	 
 	 if(s2[0] =='x' &&s1[1]=='x' &&s[2]=='.') return cout<<"YES",0;
 	  	 if(s2[0] =='.' &&s1[1]=='x' &&s[2]=='x') return cout<<"YES",0;
 	  	  	 if(s2[0] =='x' &&s1[1]=='.' &&s[2]=='x') return cout<<"YES",0;

 if(s3[2] =='x' &&s2[1]=='x' &&s1[0]=='.') return cout<<"YES",0;
 if(s3[2] =='x' &&s2[1]=='.' &&s1[0]=='x') return cout<<"YES",0;
 if(s3[2] =='.' &&s2[1]=='x' &&s1[0]=='x') return cout<<"YES",0;
 	  

 	 
	 
	  if(s[3]=='x' && s1[2]=='x'&&s2[1]=='.') return cout<<"YES",0;
 	 if(s[3]=='.'&&s1[2]=='x' &&s2[1]=='x')  return cout<<"YES",0;
 	 if(s[3]=='x'&&s1[2]=='.' &&s2[1]=='x')    return cout<<"YES",0; 
	 
 	 if(s1[2]=='x' &&s2[1]=='.'&&s3[0]=='x') return cout<<"YES",0;
 	 if(s1[2]=='x'&&s2[1]=='x' &&s3[0]=='.') return cout<<"YES",0;
	  if(s1[2]=='.' &&s2[1]=='x'&&s3[0]=='x') return cout<<"YES",0;
	  
	 // if(s3[1]=='.'&&s2[2]=='x'&&s1[3]=='x') return cout<<"YES",0;
	    if(s3[1]=='x'&&s2[2]=='.'&&s1[3]=='x') return cout<<"YES",0;
	    //  if(s3[1]=='.'&&s2[2]=='x'&&s1[3]=='.') return cout<<"YES",0;
	    
	    if(s2[3]=='x'&&s1[2]=='.'&&s[1]=='x') reutrn cout<<"YES",0;
	  
	 
    cout<<"NO";
    return 0;
	
}
