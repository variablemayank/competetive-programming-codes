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
			set<string>s;
			string s1,s2,s3,s4,s5,s6,s7,s8;
			cin>>s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8;
			s.insert(s1);
			s.insert(s2);
			s.insert(s3);
			s.insert(s4);
			s.insert(s5);
			s.insert(s6);
			s.insert(s7);
			s.insert(s8);
			if(s.size()<=6) cout<<"similar\n";
			else cout<<"dissimilar\n";
			s.clear();
		}
	}
	
