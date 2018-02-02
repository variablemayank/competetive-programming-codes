	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false),cin.tie(0);
	int main()
	{
	 
	 // jadu;
	  string s;
	  cin>>s;
	  int len =  s.size();
	  int k;
	  cin>>k;
	  int ans =0;
	  for(int i=0;i<k;i++)
	  {
	  	string check;
	  	cin>>check;
	  	int x=0,y =0;
	   	for(int i=0;i<len;i++)
	  	{
	  	  // what we have to do 
		  // to check the sequence of a,b;
		  // or sequence ba 
		  // we can consider an element 
		  // count it if i is a then 
		  // i+1 is b is i is b then i+1 is a 
		  // to make make ab sequence not working we 
		  // if we delete a sequence a or b 
		  // our job is done 
		  // and next we will add this value 
		  // in our total soluition 
	  	 if(check[0]== s[i]) x++;
		 else if(check[1]==s[i]) y++;
		 else 
		 {
		 	ans += min(x,y);
		 	x= 0;
			y= 0;
		 }	
		}

		/// if the string contain i and i+1 sequence 
		// we didnt go to the sequence ba so we are adding the 
		// value in end also
		ans+= min(x,y);
	  }
	  cout<<ans<<endl;
	  
	  return 0; // bye bye
	}
