#include<bits/stdc++.h>
using namespace std;


const int maxi = 200005;

int BIT[200009],hashing[200009],save[200009];

void update(int idx,int val){
	while(idx<=maxi){
		BIT[idx]+= val;
		idx+= idx&-idx;
	}
}

int getsum(int idx){
	int res =0;
	while(idx>0){
		res+= BIT[idx];
		idx-= idx&-idx;
	}
	return res;
}

class data{
	public:
	int idx,data,hash;
	char type;
};

data a[2000006],q[2000000];

bool compare(const data &a,const data &b){
	return a.data ==b.data ?a.idx<b.idx:a.data<b.data;
}

int search_index(int x){
	
	int l = 0,high = 200000,mid;
	
	while(l<high){
		mid  = (l+high)>>1;
		if(getsum(mid)>=x)
		high = mid;
		else 
		l = mid+1;
	}
	return l;
}

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		char c;
		int var;
		cin>>c>>var;
		a[i].type  = c;
		a[i].data = var;
		a[i].idx =  i+1;
	}
	
	sort(a,a+t,compare);
	int cnt = 1;
	int prev = a[0].data;
	a[0].hash = cnt;
	save[cnt] = a[0].data;
	
	for(int i=1;i<t;i++){
		if(prev!= a[i].data){
			prev = a[i].data;
			cnt++;
			a[i].hash = cnt;
			save[cnt] = a[i].data;
			
		}
		else
	    a[i].hash =cnt;
	}	
	
	for(int i=0;i<t;i++){
		q[a[i].idx] = a[i];
	}
	
	cnt =0;
	for(int i=1;i<=t;i++){
		
		if(q[i].type == 'I'){
			 if(hashing[q[i].hash]==0){
			 	cnt++;
			 	hashing[q[i].hash] =1;
			 	update(q[i].hash,1);
			 }
			 
		}
		else if(q[i].type =='D'){
			
			if(hashing[q[i].hash]){
				cnt--;
				hashing[q[i].hash] =0;
				update(q[i].hash,-1);
			}
			
		}
		else if(q[i].type == 'K'){
			if(q[i].data>cnt){
				cout<<"invalid\n";
				
			}
			else 
			cout<<save[search_index(q[i].data)]<<endl;
		}
		else 
		cout<<getsum(q[i].hash-1)<<endl;
	}
}
