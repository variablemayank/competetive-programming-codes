	
	#include <bits/stdc++.h>
	using namespace std;
	 

	int getSum(int n)
	{
	    int sum = 0;  
	 
	  
	   
	    for (int i=1; i<=sqrt(n); i++)
	    {
	        if (n%i==0)
	        {
	            
	         
	            if (n/i == i)
	                sum = sum + i;
	 
	            else 
	            {
	                sum = sum + i;
	                sum = sum + (n / i);
	            }
	        }
	    }
	 
	    
	    return sum - n;
	}
	 
	// Function to print Aliquot Sequence for an input n.
	void printAliquot(int n)
	{
	    // Print the first term
	    printf("%d ", n);
	    unordered_set<int>  s;
	    s.insert(n);
	 
	    int next = 0;
	    while (n > 0)
	    {
	        // Calculate next term from previous term
	        n = getSum(n);
	        cout<<n<<endl;
	        if (s.find(n) != s.end())
	        {
	            cout << "\nRepeats with " << n;
	            break;
	        }
	 
	        // Print next term
	        cout << n << " ";
	        s.insert(n);
	    }
	}
	 
	/* Driver program to test above function */
	int main()
	{
	    printAliquot(12);
	    return 0;
	}
