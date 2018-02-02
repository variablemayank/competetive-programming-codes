#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;
vector<pair<long long, long long> > vec;
int main()
{
	int N;
	
	long long S, E, x, d;
	long long left, right, ans;
	scanf("%d %lld %lld", &N, &S, &E);
	
	for(int i=0; i<N;i++)
	{
		scanf("%lld %lld", &x, &d);
		
		left = x-d;  // as this is the range the army is protected 
		right = x+d;  // so we calculate the range by calculating left value and right 
		
		
		if ((right<=S) or (left>=E))      
			continue;
			
		left = max(left, S);        // as we comparing the values for because if the value of left is less than 
		right = min(right, E);     // the S value then we will include the value of S
		vec.push_back(make_pair(left, right)); // make pair of elements 
	}
	
	
	if(vec.size()==0)
	{
		printf("%lld\n", E-S);
		return 0;
		
	}
	
	
	
	sort(vec.begin(), vec.end()); // we are doing this as we start from ordered range  
 	//cout<<"Value of vector are \n"; // print it 
	//for(int i=0;i<vec.size();i++) cout<<vec[i].first<<" "<<vec[i].second<<endl;
	// we sort the value because the smallest range starts from 1700 ->1890  and the next range 
	// start from 3045->4303 if you will sort so our not protected range will be first 1700 -S 
	// then after 4303 after check for the next difference
	left = vec[0].first; // we taken the first value 1700
	right = vec[0].second; // we take the second value 4303
	ans = max(0LL, left-S);  // calculated the diff from smallest range 1700- 229 so the diff we be added in ans
    /* After sorting the value you get are 
    1700 1890  starting from here first non protected area is 1700 -S 
    3045 4303  next 3045-1890
    3068 3230  as we will not include this value because 4303 is greater than 3230
    3776 8419   as 8419 is 4303 we will include this value 
    4153 5593   // we will not include this value 5593 <8419 
    */
    
    
	for(int i=1;i<vec.size();i++)
	{
		if(vec[i].second>right)
		{
			//printf("%lld\n", ans);
			ans = ans + max(0LL, vec[i].first - right);
			right = vec[i].second;
		}
	}
	
	ans = ans + max(0LL, E - right);  //as our right is 8419 so the difference of E- right is 0 
	printf("%lld\n", ans);  // we are doing because if the maximum range protected is 7419 then
	return 0;  // then we have to protect the area 8419-7419  got it 
	 //Cheers 
}
