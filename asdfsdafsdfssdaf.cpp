#include <bits/stdc++.h>
using namespace std;

#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define sz(x) ((int)(x).size())
#define deb(x) cout << #x << " : " << x << endl
#define debs(x ,y) cout << #x << " : " << x << " , " << #y << " : " << y << endl
#define debind(x , y) cout << #x << "[" << (y) << "] : " << (x)[(y)] << endl 
#define pB push_back
#define mP make_pair

#define rep(i , n) for(int (i) = 0 ; (i) < (n) ; ++(i))
#define repinc(i , n) for(int (i) = 1 ; (i) <= (n) ; ++(i))
#define per(i , n) for(int (i) = (n) - 1 ; (i) >= 0 ; --(i))
#define perinc(i , n) for(int (i) = (n) ; (i) >= 1 ; --(i))

#define X first
#define Y second

typedef long long ll ;

template <typename T>
ostream & operator <<(ostream & out , const vector < T >& v){
	int ss = sz(v);
	rep(i , ss)
		out << v[i] << " ";
	return out ;
}
template <typename T , typename TT > 
ostream & operator <<(ostream & out , const pair < T , TT >& p){
	out << p.first << " " << p.second ;
	return out ;
}
template<typename T , typename TT >
istream & operator >> (istream & in , pair < T , TT >& s){
   in >> s.first >> s.second ;
   return in ;
}
template<typename T>
bitset<sizeof(T)*8> BIN(T a){
	return bitset<sizeof(T)*8>(a);
}

int arr[1000000];

const int maxk = 5002 ;

ll dp[maxk][maxk];

int main(){
	int n , k;
	cin >> n >> k ;
	rep(i , n){
		cin >> arr[i];
	}
	rep(i , maxk){
		rep(j , maxk){
			dp[i][j]= numeric_limits<ll>::max(); 
		}
	}
	int a = n%k;
	trace1(a);
	int al = n/k+1 ;
    trace1(al);
	int b = k - n%k ;
	trace1(b);
	int bl = n/k ;
	trace1(bl);
	sort(arr ,arr + n);

	dp[0][0] = 0 ;
	for(int i = 0 ; i<=a ; i++){
		for(int j = 0 ;j <= b; j ++){
			if(i){
			
				dp[i][j] = min(dp[i][j] , dp[i -1][j] + arr[i*al + j*bl - 1] - arr[(i - 1)*al + j*bl]) ;
			}
			if(j){
			
				dp[i][j] = min(dp[i][j] , dp[i][j -1] + arr[i*al + j*bl - 1] - arr[i*al + (j-1)*bl]) ;
			}
		}
	}
	 rep(i , a + 1){
	 	rep(j , b + 1){
	 		cout<< i << ", "<< j << " :  " << dp[i][j] << endl ;
	 	}
	 	cout << endl ;
	 }
	cout << dp[a][b] << endl ;
	return 0 ;
}
