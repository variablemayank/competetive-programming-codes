
    /* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define gol(i,a,b) for (ll i = a; i <= b; i++)
	#define F first
	#define S second
	#define lelo(x) scanf("%lld",&x);
	#define PB push_back
	#define MP make_pair
	#define sz(c)     (ll)c.size()
	typedef long long ll;
	typedef vector<ll> vi;
	typedef pair<ll,ll> pi;
    


    int main()
    {
    	ll a,b,c,d;
    	lelo(a);
    	lelo(b);
    	lelo(c);
    	lelo(d);
    	
        ll x,y,temp;
        
        x= a*b;
        y = c*d;
        
        ll g= __gcd(x,y);
        ll aa = x/g,bb= y/g;
        
        g= aa;
        while(g%2==0) g/=2;
        while(g%3==0) g/=3;
        
        if(g!=1) return cout<<"-1",0;
        
        g = bb;
        while(g%2==0) g/=2;
        while(g%3==0) g/=3;
        
        if(g!=1) return cout<<"-1",0;
        
        ll diff =0,a3=0,b3=0,a2=0,b2=0;
        
        temp = x;
        while(temp%2==0) 
        {
        	a2++;
        	temp/=2;
		}
		
		temp = y;
		
		while(temp%2==0)
		{
			b2++;
			temp/=2;
		}
		
		temp = x;
		
		while(temp%3==0)
		{
		   a3++;
		   temp/=3;
		}
		
		temp = y;
		while(temp%3==0)
		{
			b3++;
			temp/=3;
		}
		
		int ans= 0;
		
		if(a3==b3)
		{
			 temp  = min(a2,b2);
			
			 a2 -= temp,b2-=temp;
			 ans+= max(a2,b2);
			 while(a2--)
			 {
			 	if(a%2==0) a/=2;
			 	else b/=2;
			 }
			 while(b2--)
			 {
			 	if(c%2==0) c/=2;
			 	else d/=2;
			 }
			 cout<<ans<<endl;
			 cout<<a<<" "<<b<<endl;
			 cout<<c<<" "<<d<<endl;
			 return 0;
		}
		
		if(a3>b3)
		{
			diff  = a3-b3;
			
			ans+= diff;
			a3 = b3 =0;
			a2 += diff;
			
			while(diff--)
			{
				if(a%3==0) a= (a/3)*2;
				else b= (b/3)*2;
			}
			temp = min(a2,b2);
			a2 -= temp;
			b2 -=temp;
			ans+= max(a2,b2);
			
			while(a2--)
			{
				if(a%2==0)
				a/=2;
				else b/=2;
			}
			while(a3--)
			{
				if(a%3==0)  a/=3;
				else b/=3;
			}
			while(b2--)
			{
				if(c%2==0) c/=2;
				else d/=2;
			}
			while(b3--)
			{
				if(c%3==0) c/=3;
				else d/=3;
			}
			cout<<ans<<endl;
			cout<<a<<" "<<b<<endl;
			cout<<c<<" "<<d<<endl;
			return 0;
		}
		
		diff = b3-a3;
		
		ans+=diff;
		b3 = a3=0;
		b2+= diff;
		while(diff--)
		{
			if(c%3==0) c = (c/3)*2;
			else d= (d/3)*2;
		}
		temp  = min(a2,b2);
		a2 -= temp;
		b2-=temp;
		ans+= max(a2,b2);
		
		    while(a2--)
			{
				if(a%2==0)
				a/=2;
				else b/=2;
			}
			while(a3--)
			{
				if(a%3==0)  a/=3;
				else b/=3;
			}
			while(b2--)
			{
				if(c%2==0) c/=2;
				else d/=2;
			}
			while(b3--)
			{
				if(c%3==0) c/=3;
				else d/=3;
			}
			cout<<ans<<endl;
			cout<<a<<" "<<b<<endl;
			cout<<c<<" "<<d<<endl;
			return 0;
		
    }
