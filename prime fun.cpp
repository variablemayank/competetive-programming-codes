#include <bits/stdc++.h>
	using namespace std;
typedef long long int ll;
vector <ll> factors[1000005];
 vector <ll> current(1000005);
	int main (){
		ll L,R;
		cin>>L>>R;
		ll n=0;
		 n=R-L+1;
	 

	  memset(factors,0,sizeof(factors));
	 // memset(current,0,sizeof(current));
	    for (ll i=L ; i<=R; i++) {
	        current[i - L] = i;
	    }
	    /*for(int i=L;i<=R;i++){
	    	cout<<current[i-L]<<endl;
		}*/
	
	    // A modified Sieve of Erathostenes:
	    for (ll p=2; p <= R/p; p++) {
	        ll s = L;
	        if (L % p != 0) {
	            s += p - (L % p);
	        }
	        while (s <= R) {
	        
	            while( current[s - L] % p == 0) {
	            	//	cout<<"s-L is "<<s-L<<endl;
	                current[s - L] /= p;
	                factors[s-L].push_back(p);
	            }
	            s += p;
	        }
	    }
		for (ll i=L ; i<=R; i++) {
	        if (current[i - L] != 1) {
	        	factors[i-L].push_back(current[i-L]);
	        }
	    }
	    
	    
	    ll total=0;
      bool flag=false;
		for(ll i=L;i<=R;i++){
			if(i==1){
				flag=true;
				continue;
			}
			
			if(factors[i-L].size()==1){
				total+=2;
				//cout<<"just  one prime factor so total is "<<total<<endl;
				continue;
			}
		map <ll,ll> m;
		m.clear();
			for(ll j=0;j<factors[i-L].size();j++){
				ll val=factors[i-L][j];
				//cout<<"val is "<<val<<endl;
					m[val]++;
			}
			map <ll,ll>:: iterator it;
			vector <ll> v;
			v.clear();
			for(it=m.begin();it!=m.end();it++){
				ll  freq=it->second;
				freq++;
				v.push_back(freq);
			}
			sort(v.begin(),v.end());
		/*	for(ll i=0;i<v.size();i++){
				cout<<v[i]<<" ";
			}
			cout<<endl;*/
			ll sum=0;
			
			
			while(v[0]!=0){
				ll pro=1LL;
				for(ll i=0;i<v.size();i++){
					pro=pro*v[i];
				}
				if(v.size()-1>=0)
				v[v.size()-1]=v[v.size()-1]-1;
				sum+=pro;
				sort(v.begin(),v.end());
			}
			sum=sum-1;
		//	cout<<"sum is "<<sum<<endl;
			
			total+=sum;
			v.clear();
			m.clear();
			sum=0;
		
			
			
		}
			
cout<<total<<endl;			

		}  
	
