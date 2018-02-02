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


 
string charARRAY;
 
int FIRST_a,FIRST_b,A_max,B_max;

void result_itis(int FIRST_a,int FIRST_b)
{
	int round=FIRST_a/A_max,B_round=FIRST_b/B_max,A_waste,B_waste,unemployed=0;
	if(FIRST_a%A_max)
	round++;
	if(FIRST_b%B_max)
	B_round++;
	if(round==B_round)
	{
	    B_waste=FIRST_b-(B_round-1)*B_max;
	    for(int C=0;C<B_waste;C++)
	    cout<<"b";
		for(int C=1;C<=round-1;C++)
		{
			for(int D=0;D<A_max;D++)
			cout<<"a";
			for(int D=0;D<B_max;D++)
			cout<<"b";
		}
		A_waste=FIRST_a-(round-1)*A_max;
		for(int C=0;C<A_waste;C++)
	    cout<<"a";
	    return ;
	}
	if(round>B_round) 
	{
	    unemployed=0;
	    B_round=min(round-1,FIRST_b);
	    A_waste=FIRST_a-(B_round+1)*A_max;
	    unemployed=min(FIRST_b-B_round,A_waste-1);
	    unemployed=max(unemployed,0);
	    B_waste=FIRST_b-(B_round+unemployed);
		for(int C=1;C<=B_round;C++)
		{
			for(int D=0;D<A_max;D++)
			cout<<"a";
			cout<<"b";
			for(int D=1;D<B_max;D++)
		    {
		    	if(B_waste==0)
		    	break;
		    	cout<<"b";
		    	B_waste--;
			}
		}
		A_waste=FIRST_a-A_max*B_round;
		for(int D=0;D<A_max;D++)
		{
			if(A_waste==0)
			break;
			cout<<"a";
			A_waste--;
		}
		if(A_waste>0)
		cout<<"*",
		result_itis(A_waste,unemployed);
		return ;
	}
	if(B_round>round)
	{
		unemployed=0;
	    round=min(B_round-1,FIRST_a);
	    B_waste=FIRST_b-(round+1)*B_max;
	    unemployed=min(FIRST_a-round,B_waste-1);
	    unemployed=max(unemployed,0);
	    A_waste=FIRST_a-(round+unemployed);
		for(int C=1;C<=round;C++)
		{
			for(int D=0;D<B_max;D++)
			cout<<"b";
			cout<<"a";
			for(int D=1;D<A_max;D++)
		    {
		    	if(A_waste<=0)
		    	break;
		    	cout<<"a";
		    	A_waste--;
			}
		}
		B_waste=FIRST_b-B_max*round;
		for(int D=0;D<B_max;D++)
		{
			if(B_waste<=0)
			break;
			cout<<"b";
			B_waste--;
		}
		if(B_waste>0)
		cout<<"*",
		result_itis(unemployed,B_waste);
	} 
}
int main()
{
	int query;
	cin>>query;
	while(query--)
	{
        FIRST_a=0,FIRST_b=0;
		cin>>charARRAY;
		cin>>A_max>>B_max;
		for(auto C:charARRAY)
		{
			if(C=='a')
			FIRST_a++;
			else
			FIRST_b++;
		}
		result_itis(FIRST_a,FIRST_b);
	}
	return 0;
}  
 
