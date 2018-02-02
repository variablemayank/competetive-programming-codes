#include<stdio.h>
#include<vector>

using namespace std;

const int maxi=1000;

vector <int> v[maxi];

int gr[maxi],ob[maxi],x,y,n,t;

void dfs(int x)
{
    ob[x]=1;

    for (int i=0;i<v[x].size();i++)
    if (ob[v[x][i]]==0)
    {
        dfs(v[x][i]);
        gr[x]=gr[x]^(gr[v[x][i]]+1);
    }
}

int main()
{
    scanf("%d",&t);

    while (t--)
    {
        scanf("%d",&n);

        for (int i=0;i<501;i++)
        {
            v[i].clear();
            gr[i]=0;
            ob[i]=0;
        }

        for (int i=1;i<n;i++)
        {
            scanf("%d%d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }

         dfs(1);

       if (gr[1]==0) printf("Bob\n"); else printf("Alice\n");

    }

    return 0;
}
