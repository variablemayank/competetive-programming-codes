/*
Emperor Akbar was in the habit of putting riddles 
and puzzles to his courtiers. He often asked 
questions which were strange and witty.
It took much wisdom to answer these questions. 
Once he asked a very strange question. 
The courtiers were dumb folded by his question. 
Akbar glanced at his courtiers. As he looked, 
one by one the heads began to hang low in search
of an answer. It was at this moment that Birbal
entered the courtyard. Birbal who knew the nature
of the emperor quickly grasped the situation and
asked, "May I know the question so that I can
try for an answer". 
Akbar said, "How many crows are there in this city?" 
Without even a moment's thought, Birbal replied 
"There are fifty thousand five hundred and 
eighty nine crows, my lord". 
"How can you be so sure?" asked Akbar. 
Birbal said, "Make you men count,
My lord. If you find more crows it means 
some have come to visit their relatives here. 
If you find less number of crows it means some 
have gone to visit their relatives elsewhere". 
Akbar was pleased very much by Birbal's wit. 
*/


#include<bits/stdc++.h>
using namespace std;

#define jadu ios_base::sync_with_stdio(false);
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define f first
#define s second
#define lelo(x) scanf("%d",&x);
#define dedo(x) printf("%d",x); 	
#define PB push_back
#define MP make_pair
#define sz(c)     (int)c.size()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int mod = 1000000007;
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }

 
int main()
{
	ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
	int h1,m,s,t11,t22;
	cin >> h1 >> m >> s >> t11 >> t22;
	int t1=t11*5, t2=t22*5;
	if(t1==60)
		t1=0;
		if(t2==60)
			t2=0;
			if(h1==12)
				h1=0;
	double h=h1*5;
	int q=0,p=0;
	if(m==s && s==0)
	{
		if(h>min(t1,t2) && h< max(t1,t2))
		{
			{cout << "NO";return 0;}
		}
		else {cout << "YES";return 0;}		
	}
	else double h=h+0.5;
	for( int i=min(t1,t2);i<max(t1,t2);i++)
	{
		if(  i%60==m%60 || i%60==s%60 || (i<h && i+1>h))
			{
				q++;
			}
 
	}
	for(int i=max(t1,t2);i<min(t1,t2)+60;i++)
	{
		if(i%60 == m%60 || i%60== s%60 || (i<h && i+1>h) || (i<h+60 && i+1>h+60))
		{
			p++;
		}
	}
	if(p==0 || q==0)
		cout << "YES";
		else cout << "NO";
		cout << q << p;
}
