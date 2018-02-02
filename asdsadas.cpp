#include <bits/stdc++.h>

using namespace std;
long counti =0;
 long len;
        long c;
      
vector<long> lena_sort(vector<long> nums)
 {
    if (nums.size ()<= 1) 
	{
        return nums;
    }
    long pivot = nums[0];
     vector<long> less;
     vector<long> more;
   
    for (long i = 1; i < nums.size(); ++i) {
    	// Comparison
        
        if (nums[i] < pivot)
		 {
		 	//if(counti==c) break;
        	counti++;
            less.push_back(nums[i]);
        }
        else {
        	//if(counti==c) break;
        	counti++;
            more.push_back(nums[i]);
        }
    }
    lena_sort(less);
    lena_sort(more);
    for(long i=0;i<less.size();i++) cout<<less[i]<<" ";
    cout<<endl;
    for(long i=0;i<more.size();i++) cout<<more[i]<<" ";
    cout<<endl;
    vector<long>ans(len);
    for(long i=0;i<less.size();i++)
    {
    	ans[i] = less[i];
	}
	ans[less.size()] = pivot;
	for(long i=less.size()+1;i<more.size();i++)
	{
		ans[i] = more[i];
	}
	return ans;
}
long main(){
    long q;
    cin >> q;
    for(long a0 = 0; a0 < q; a0++){
       
        cin >> len >> c;
      vector<long > vec(len);
      for(long i=0;i<len;i++) vec[i]= i+1;
      vec = lena_sort(vec);
     // cout<<vec[1];
    
     	for(long i=0;i<len;i++)
     	{
     		cout<<vec[i]<<" ";
		 }
}
}

