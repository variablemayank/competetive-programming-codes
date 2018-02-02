	#include<bits/stdc++.h>
	 
	#define llt long long int 
	#define db double
	#define mo 1000000007
	#define INF 1e18
	 
	//INPUT
	#define ind(n) scanf("%d" , &n)
	#define ind2(n,m) ind(n) , ind(m)
	#define inll(n) scanf("%lld" , &n)
	#define inll2(n,m) inll(n) , inll(m)
	#define inc(c) scanf("%c" , &c)
	#define ins(str) scanf("%s" , str)
	 
	//OUTPUT
	#define outd(n) printf("%d\n" , n)
	#define outll(n) printf("%lld\n" , n)
	#define outc(c) printf("%lld\n" , c)
	 
	// PAIR    
	#define mp make_pair
	#define pb push_back
	#define X first
	#define Y second
	#define pi pair < int , int >
	#define pll pair < llt , llt >
	#define vi vector < int >
	#define vvi vector < vi >
	#define vll vector < llt >
	#define vvll vector < vll >
	#define qi queue < int >
	#define qll queue < llt >
	 
	//MEMORY
	#define clr(a) memset (a , 0 , sizeof(a))
	#define init(a) memset (a , -1 , sizeof(a))
	 
	using namespace std ;
	 
	llt MAX ( llt a , llt b ) { return a > b ? a : b ; }
	llt MIN ( llt a , llt b ) { return a < b ? a : b ; }
	 
	llt mod(llt x )
	{
		if ( x < 0 )
			return -1*x ;
		return x ;
	}
	 
	int main()
	{
	
		llt n , i , j , a[100005] , b[100005] , c[100005] ;
		inll(n) ;
		for( i = 0 ; i < n ; ++i )
		{
			inll(a[i]) ;
			if ( i == 0 )
				continue ;
			b[i-1] = mod(a[i-1] - a[i]) ;
			c[i-1] = mod(a[i-1] - a[i]) ;
		}
	 
		for ( i = 0 ; i < n-1 ; ++i )
		{
			if ( i & 1 )
				b[i] *= -1 ;
			else
				c[i] *= -1 ;
		}
	 
		llt meh , msf ;
		msf = INT_MIN ;
		meh = 0 ;
		for ( i = 0 ; i < n-1 ; ++i )
		{
			meh = meh + b[i] ;
			if ( msf < meh )
				msf = meh ;
			if ( meh < 0 )
				meh = 0 ;
		}
	 
		llt answer = msf ;
		msf = INT_MIN ;
		meh = 0 ;
		for ( i = 0 ; i < n-1 ; ++i )
		{
			meh = meh + c[i] ;
			if ( msf < meh )
				msf = meh ;
			if ( meh < 0 )
				meh = 0 ;
		}
		answer = MAX(answer , msf) ;
		cout << answer << endl ;
	 
	 
	    return 0 ;
	}
