#include <bits/stdc++.h>
using namespace std;
#define infinite 1<<31
class Solution{
	public:
		bool valid(int x,int y,int n,int m){
			if(x<=0 || y<=0 || x>n || y>m)
			return false;
			return true;
		}
		int bfs(int n,int m ,int a,int b ,int c,int d){
			queue <int> q;
		
			bool visited[n+1][m+1];
		int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
        int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
 
			memset(visited,false,sizeof(false));
				int distance[n+1][m+1];
		
		memset(distance,-1,sizeof distance);
		     distance[a][b]=0;
		     visited[a][b]=true;
		     q.push(a);
			 q.push(b);
		     while(!q.empty()){
		     	int r1=q.front();q.pop();
		     	//cout<<"r1 is "<<r1<<endl;
		     
		     	int r2=q.front();q.pop();
		     //	cout<<"r2 is "<<r2<<endl;
		     	for(int i=0;i<8;i++){
		     		int nr=r1+dx[i];
		     		int nc=r2+dy[i];
		     		if( valid(nr,nc,n,m) && visited[nr][nc]==false){
		     			visited[nr][nc]=true;
		     			distance[nr][nc]=distance[r1][r2]+1;
		     	//	cout<<"distance of new row    "<<nr<<"   and new column  "<<nc<<" is "<<distance[nr][nc]<<endl;
		     			q.push(nr);q.push(nc);
					 }
				 }
			 }
			 if(distance[c][d]==-1)
			 return -1;
			 else
			 return distance[c][d];
		     
		}
};
int main(){
	Solution ob;
	int n,m,a,b,c,d;
	// 4 7 2 6 2 4
	cin>>n>>m>>a>>b>>c>>d;
	int ans=ob.bfs(n,m,a,b,c,d);
	cout<<ans<<endl;
}
