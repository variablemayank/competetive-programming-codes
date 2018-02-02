	/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (int i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define PB push_back
	#define MP make_pair
	#define sz(c)     (int)c.size()
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    
  

	int main()
	{
          int t;
          cin>>t;
          while(t--)
          {
          	string s,str,str1;
          	cin>>s;
            str = s;
            sort(str.begin(),str.end());
            if(s== str) return cout<<"0",0;
            else 
            {
            	int ans =0;
            while(s!=str)
            {
            
            	int len = str.length();
            	int count1=0,count2=0;
            	
            	for(int i=0;i<len;i++)
            	{
            		if(s[i]=='1' && s[i+1] == '0')
            		{
            	        count1 = i;
            	        count1++;
            	        for(count1; count1<len;count1++)
            	        {
            	        	if(s[count1]=='0')
            	        	{
            	        		continue;;
							}
            	        	else  break;
            	        }
            	        
					}
				    else continue;
						
					ans += count1 -i+1;
					swap(s[count1],s[i]);
					count1 =0;
				}
			}
			cout<<ans<<endl;
		    }
		    
		  }
	}
