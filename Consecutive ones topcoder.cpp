	#include<bits/stdc++.h>
	using namespace std;
	
	class consecutiveones  
	{
		public:
		 long long get(long long  n,int k)
		 {
		 	    long long answer = (1LL<<52);
		 	    
			 	for(int i=0;i<50;i++)
			 	{
			 		
			 	if(i+k >50) break;

                // this is the next consecutive value which will contain the next value 
                // 
			 	long long x = (1LL<<(i+k)) -(1LL<<i);
			 	//cout<<" x "<<x<<endl;
				  
				// Checking for the next consecutive value of n when n& x == x means exculding the the zero we get the value 
				// x 
				//cout<<"n and x "<<(n&x)<<endl;
			 	if((n&x)==x)
			 	{
			 		//cout<<"first"<<endl;
			 	   answer = min(answer,n);	
			 	   
				}
			    else  // if its is n&x == x then we are making n&x == x 
			    {    // so we make n|x and exclude the no of zero from i th term
				   answer = min(answer, (n|x) & ~((1LL<<i)-1));
			    }
			    }
			   cout<< answer;
	    }
	};
	
	int main()
	{
		consecutiveones obj;
	    obj.get(7,2);
	}
