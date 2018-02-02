#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
int BIT[1000001];
int ans[3000005];

void update(int idx){
	for(idx;idx<100001;idx+=idx&-idx)
	++BIT[idx];
}
int getsum(int idx){
	int res =0;
	
	for(;idx>0;idx -= idx&(-idx)){
		res+= BIT[idx];
	}
	return res;
}
int main()
{
	vector<pair<pair<int,int>,int> > vec;
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	   int x,y;
	   cin>>x>>y;
	   
	   vec.push_back(make_pair(make_pair(x,y),i));
	}
	sort(vec.begin(),vec.end());
	int cur=0;
	for(int i=0;i<t;){
		cur = i;
		
		while(cur<t &&vec[cur].f.f ==vec[i].f.f && vec[cur].f.s==vec[i].f.s){
			cur++;
		}
		
		for(int j=i;j<cur;j++){
			ans[vec[j].second]= getsum(vec[j].f.s);
		}
		
		for(int j=i;j<cur;j++){
			update(vec[j].f.s);
		}
		
		i =cur;
	}
	
	for(int i=0;i<t;++i){
		cout<<ans[i]<<endl;
	}

//	for(int i=0;i<vec.size();++i){
//		cout<<vec[i].first.first<<" "<<vec[i].first.second<<" "<<vec[i].second<<endl;
//	}
    
}
