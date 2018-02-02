#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#define SS 223223
#define ll long long
#define pii pair<int,int>
#include <bits/stdc++.h>
using namespace std;

int N, Q;
ll cur_ans, cnt[1000000], ans[SS];
int b_size;
ll arr[SS];
pair<pii, int> queries[SS];
//mo ordering of queries part .Do not disturb .
bool cmpF(const pair<pii, int>&a, const pair<pii, int>&b){
	int	xblock = a.first.first / b_size;
	int yblock = b.first.first / b_size;
	if (xblock != yblock){
		return xblock < yblock;
	}
	return a.first.second < b.first.second;
}

void update(int element){
	cnt[element]++;
	if(cnt[element]==1){
		cur_ans++;
	}
}
void remove(int element){
	cnt[element]--;
	if(cnt[element]==0){
		cur_ans--;
	}
}


int main(){
	scanf("%d", &N);
	cur_ans = 0;// do this inside main .
	//int f, s;
	b_size = static_cast<int>(sqrt(N));
	for (int i = 0; i < N; i++){
		scanf("%I64d", &arr[i]);
	}
	scanf("%d",&Q);
	// input queries .MY queries in problem is 1 based index so just inpuT . Do not disturb.
	for (int i = 0; i < Q; i++){
		scanf("%d %d", &queries[i].first.first, &queries[i].first.second);
		queries[i].first.first--; queries[i].first.second--;
		queries[i].second = i;
	}
	sort(queries, queries + Q, cmpF);// sorted
	int m_left = 0, m_right = -1;
	for (int i = 0; i < Q; i++){
		int left = queries[i].first.first;
		int right = queries[i].first.second;
		while (m_right < right){
			m_right++;
			update(arr[m_right]);
		}
		while (m_right>right){
			remove(arr[m_right]);
			m_right--;
		}
		while (m_left < left){
			remove(arr[m_left]);
			m_left++;
		}
		while (m_left > left){
			m_left--;
			update(arr[m_left]);
		}

		ans[queries[i].second] = cur_ans;
	}
	for (int i = 0; i < Q; i++){// printing output for all queries 
		printf("%I64d\n", ans[i]);
	}
	//system("pause");
	return 0;

