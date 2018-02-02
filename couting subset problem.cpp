	#include<bits/stdc++.h>
	using namespace std;
	
	int counti =0;
	int arr[100005];
	void find_subsets(size_t sz_arr, const int sum_of_subset)
	{
		const unsigned int max_mask_of_subset = (int)pow((double)2, (int)sz_arr);
		const unsigned int mix_mask_of_subset = 1;
		unsigned int sum = 0;
		std::stringstream str_stream;
	
		for (size_t mask = mix_mask_of_subset; mask < max_mask_of_subset; ++mask)
		{
			for (size_t index = 0; index < sz_arr; ++index)
			{
				if ( (mask >> index) & 0x01 )
				{
					sum += arr[sz_arr - 1 - index];
					str_stream << arr[sz_arr - 1 - index] << " ";
				}
			}
			if (sum == sum_of_subset)
			{
				counti++;
			}
			str_stream.str("");//.clear();
			sum = 0;
		}
	}
	
	
	int main()
	{
		int n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>arr[i];
		find_subsets(n, m);
	    cout<<counti<<endl;
		return 0;
	}
