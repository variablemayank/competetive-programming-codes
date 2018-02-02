		#include <stdio.h>
		
		int main()
		
		{ 
		
		int i=5;
		
		printf(" %d\n",++i);  // the value of will be get incremented to 6 that why the printed value is 6
		
		printf(" %d\n",++i); // same as above the printed value will be 7
		
		printf(" %d\n",++i); // same as above the printed value will be 8
		
		printf(" %d\n",--i);  // now the value get predecremented it will be decremented first then printed ,the printed value will be 7
		
		printf(" %d\n",--i); // same as above the printed value will be 6
		
		printf(" %d \n",--i);  // same as aboeve the printed valuw will be 5 
		
		printf("%d\n",i--);   // in this condition the currently the value of i is 5 then this i-- means postdecrement it will the value of i ans then after decrement 
		                     // so your output will be 5 then if you print the value you will get 4 printed (printf("%d",i); = 4)
		                     
		
		printf("%d\n",i++); // now from above operation the value is 4 in this print function you will get printed 4 and then your value will get upgraded to 5 
		                   // after this print operation your value of i is 5 
		
		printf(" %d\n",i++);  // simply the output will be 5 after this operation the value of i is 6 
		
		}
