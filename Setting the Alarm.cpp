#include<bits/stdc++.h>
using namespace std;

queue<pair< pair<int,int>,int> > mp;
int level[14][62][4];
bool visit[14][62][4];


void hplus(int hh,int mm ,int flag)
{
	hh++;
	if(hh==12)
    {
    	 flag ^= 1; // altering the value 
    	 
	}
	if(hh>12)
	{
		hh =1;
		
	}
	if(!visit[hh][mm][flag])
	    mp.push(make_pair(make_pair(hh,mm),flag));
}

void hminus(int hh,int mm ,int flag)
{
	hh--;
	if(hh ==11)
	{
		flag ^=1;
	}
    if(hh <1)
    {
    	hh =12;
	}
	if(!visit[hh][mm][flag])
	    mp.push(make_pair(make_pair(hh,mm),flag));
}

void mplus(int hh,int mm ,int flag)
{
  
    mm++;
	if(mm<=59)
	{
	  if(!visit[hh][mm][flag])
	    mp.push(make_pair(make_pair(hh,mm),flag));	
	}	
	else
	{
		mm = 0;
		hplus(hh,mm,flag);
	}
}

void mminus(int hh,int mm,int flag)
{
	mm--;
	if(mm>=0)
	{
	   if(!visit[hh][mm][flag])
	    mp.push(make_pair(make_pair(hh,mm),flag));
	}
	else
	{
		mm = 59;
		hminus(hh,mm,flag);
	}
}
void hashx(int hh,int mm ,int flag)
{
	flag ^=1;
    if(!visit[hh][mm][flag])
	    mp.push(make_pair(make_pair(hh,mm),flag));
}
int solve(int h1,int m1,int flag1, int h2,int m2, int flag2 )
{
	
	memset(visit,false,sizeof(visit));
	
	mp.push(make_pair(make_pair(h1,m1),flag1));
	int count =0;
	
	
    while(mp.empty()== false)
	{
		int top  = mp.size();
		//cout<<top<<endl;
		for(int i=1;i<=top;i++)
		{
			pair<pair<int,int>,int> pm  = mp.front();
			mp.pop();
			
		    int nh = pm.first.first; 
		    int ns = pm.first.second;
		    int nt = pm.second;
		    //cout<<nh<<ns<<nt<<endl;  
		    if(visit[nh][ns][nt]) 
			continue;
			
			visit[nh][ns][nt] = true;
			level[nh][ns][nt] = count;
			
			hplus(nh,ns,nt);
			hminus(nh,ns,nt);
			mplus(nh,ns,nt);
			mminus(nh,ns,nt);
		    hashx(nh,ns,nt);
		}
		count++;
	}
	
	return level[h2][m2][flag2];
	
    
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
         int h1,m1,h2,m2;
         char str1[10];
         char str2[10];
        scanf("%d:%d %s %d:%d %s",&h1,&m1,str1,&h2,&m2,str2);
        
        int flag1 = 0;
        int flag2 = 0;
        if(strcmp(str1,"pm")==0) flag1 = 1;
        if(strcmp(str2,"pm")==0) flag2 = 1;
        
        int result = solve(h1,m1,flag1,h2,m2,flag2);
        cout<<result<<endl;
 	}
	
}
