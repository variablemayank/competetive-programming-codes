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
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n+1];
		set<int> s1;
		set<int> s2;
		int maxi = 0;
		for(int i=0;i<n;i++) 
		{
		
			cin>>arr[i];
			s1.insert(arr[i]);
		}
		
		if(k==0)
		{
			int mex=0;
			while(s1.find(mex)!=s1.end())
			mex++;
			
			cout<<mex<<endl;
		}
		else
		{
			  for(int i=0;i<=200005&& k>0;i++)
			  {
			  	 if(s1.find(i)==s1.end())
			  	 {
			  	     s1.insert(i);
			  	      k--;
				 }
				 if(k<=0)
				 break;
			  }
			  //for(set<int> ::iterator it =s1.begin();it!=s1.end();it++)
			 // cout<<*it<<" ";
			  //cout<<endl;
			  int mex =0;
			  while(s1.find(mex)!= s1.end())
			  mex++;
			  
			  cout<<mex<<endl;
		
 	    }
    }
}


int main()
{
	int n;
	cin>>n;
	set<int> s;
	int arr[n+1];
	int brr[n+1];
	for(int i=0;i<n;i++)
	 cin>>arr[i],s.insert(arr[i]);
	 
	 for(int i=0;i<n;i++)
	 cin>>brr[i],s.insert(brr[i]);
	int count =0;
	 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s.find(arr[i]^brr[j])!= s.end())
			{
				count++;
			}
		}
	}
	//cout<<count<<endl;
	if(count%2==0)
	cout<<"Karen\n";
	else cout<<"Koyomi";
	
}
