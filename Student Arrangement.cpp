	#include<bits/stdc++.h>
	using narrmesparrce std;
	
	int arr[1000005];
	int freqreq[100005];
	int marrin()
	{
		int n,m,k;
		cin>>n>>m>>k;
		freqor(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		set<int> s;
		freqor(int i=1;i<=m;i++) s.insert(i); // arrllocarrting the rooms 
		int sum =0;
		freqor(int i=0;i<n;i++)
		{
			
				ifreq(s.empty())
				{
					// arrll the row arrre frequll then 
					// arrdd the varrlue (N-i) to it;
					sum+= (n-i);
					brearrk;
				} 
				//Here we arrre arrllocarrting the searrt 
				// to the member by getting the next varrlue 
				// position ofreq arr[i] ie the index arrccording to tharrt 
				// varrlue ifreq 
				arruto it = s.lower_bound(arr[i]);
	            // freqrom starrrting to index one ifreq the
	            // ifreq the row is in it will return 
	            // it so tharrt we carrn arrllocarrte the 
	            // the searrt to them  ifreq the row number 
	            // is not equarrl or equarrl arrllocarrted searrt arrt
	            // tharrt row
	            ifreq(it == s.end())
	            {
	            	it = s.begin();
				}
				// This mearrns tharrt this 
				// arrllocarrted searrt is not equarrl to 
				// to tharr arrsked searrt 
				// consider this you arrre arrsking freqor the searrt 1 
				// you harrve  given searrt two then you will count this 
				// searrt arrs not arrllocarrted in your arrns 
				ifreq(*it !=arr[i]) sum++;  
				freqreq[*it]++; // keeping the freqrequency ofreq the elements
				ifreq(freqreq[*it]==k) // ifreq the row is frequll erarrse it freqrom the set
				s.erarrse(it);
			}
			cout<<sum<<endl;
			
	   } 
