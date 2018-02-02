#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1,s2,s3;
	cin>>s>>s1>>s2>>s3;
	if(s[0]=='x' &&s[1]=='x' &&s[2]=='.')  return cout<<"YES",0;
	if(s[0]=='x' &&s[2]=='x' &&s[1]=='.')  return cout<<"YES",0;
	
	if(s[3]=='x' &&s[2]=='x' && s[1]=='.') return cout<<"YES",0;
	if(s[3]=='x'&&s[1]=='x'&&s[2]=='.')  return cout<<"YES",0;
	
	if(s1[3]=='x' &&s1[2]=='x' && s1[1]=='.') return cout<<"YES",0;
	if(s1[3]=='x'&&s1[1]=='x'&&s1[2]=='.')  return cout<<"YES",0;
	
		if(s1[0]=='x' &&s1[1]=='x' &&s[2]=='.')  return cout<<"YES",0;
	if(s1[0]=='x'&&s1[2]=='x'&&s1[1]=='.')  return cout<<"YES",0;
	
		if(s2[3]=='x' &&s2[2]=='x' && s2[1]=='.') return cout<<"YES",0;
	if(s2[3]=='x'&&s2[1]=='x'&&s2[2]=='.')  return cout<<"YES",0;
	
		
    if(s2[0]=='x' &&s2[1]=='x' &&s2[2]=='.')  return cout<<"YES",0;
      if(s2[0]=='x' &&s2[2]=='x' &&s2[1]=='.')  return cout<<"YES",0;
	
			if(s3[3]=='x' &&s3[2]=='x' && s3[1]=='.') return cout<<"YES",0;
	if(s3[3]=='x'&&s3[1]=='x'&&s3[2]=='.')  return cout<<"YES",0;
	
     if(s3[0]=='x'&&s3[2]=='x'&&s3[1]=='.')  return cout<<"YES",0;
	if(s3[0]=='x'&&s3[1]=='x'&&s3[2]=='.')  return cout<<"YES",0;
	
		
    if(s[0]=='x' &&s1[0]=='x' &&s2[0]=='.')  return cout<<"YES",0;
    if(s[0]=='x' &&s2[0]=='x' &&s1[0]=='.')  return cout<<"YES",0;
    
      if(s1[0]=='x' &&s2[0]=='x' &&s3[0]=='.')  return cout<<"YES",0;
      
         if(s[0]=='x' &&s1[0]=='x' &&s2[0]=='.')  return cout<<"YES",0;
            if(s[0]=='x' &&s2[0]=='x' &&s1[0]=='.')  return cout<<"YES",0;
         
      if(s1[0]=='x' &&s2[0]=='x' &&s3[0]=='.')  return cout<<"YES",0;
      
       if(s[1]=='x' &&s1[1]=='x' &&s2[1]=='.')  return cout<<"YES",0;
         if(s[1]=='x' &&s2[1]=='x' &&s1[1]=='.')  return cout<<"YES",0;
      if(s1[1]=='x' &&s2[1]=='x' &&s3[1]=='.')  return cout<<"YES",0;
      
       if(s[2]=='x' &&s1[2]=='x' &&s2[2]=='.')  return cout<<"YES",0;
      if(s1[2]=='x' &&s2[2]=='x' &&s3[2]=='.')  return cout<<"YES",0;
      
         if(s[3]=='x' &&s1[3]=='x' &&s2[3]=='.')  return cout<<"YES",0;
      if(s1[3]=='x' &&s2[3]=='x' &&s3[3]=='.')  return cout<<"YES",0;
      
         if(s3[0]=='x' &&s2[0]=='x' &&s1[0]=='.')  return cout<<"YES",0;
      if(s3[0]=='x' &&s1[0]=='x' &&s2[0]=='.')  return cout<<"YES",0;
      
             if(s3[1]=='x' &&s2[1]=='x' &&s1[1]=='.')  return cout<<"YES",0;
      if(s3[1]=='x' &&s1[1]=='x' &&s2[1]=='.')  return cout<<"YES",0;
      
              if(s3[2]=='x' &&s2[2]=='x' &&s1[2]=='.')  return cout<<"YES",0;
      if(s3[2]=='x' &&s1[2]=='x' &&s2[2]=='.')  return cout<<"YES",0;
      
              if(s3[3]=='x' &&s2[3]=='x' &&s1[3]=='.')  return cout<<"YES",0;
      if(s3[3]=='x' &&s1[3]=='x' &&s2[3]=='.')  return cout<<"YES",0;
      
      
      cout<<"NO";
      return 0;
	
}
