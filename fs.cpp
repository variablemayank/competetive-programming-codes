   #include"bits/stdc++.h"
   using namespace std;
   
   #define ll long long 
   int mai()
   {
   	  string s;
   	  cin>>s;
   	  ll oddans=0,evenans =0,odda=0,oddb,evena=0,evenb=0;
   	  
   	  
   	  for(int i=0;i<s.length();i++)
   	  {
   	  	 oddans++;
   	  	 if(i%2==0)
   	  	 {
   	      if(s[i]=='a') oddans+= odda,evenans+=evena;
   	      else oddans+= oddb,evenans+=evenb;
   	      }
   }
