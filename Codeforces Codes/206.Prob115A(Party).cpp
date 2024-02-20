///BFS
#include <bits/stdc++.h>

using namespace std;

#define MX 2005

typedef long long ll;

vector<int> adj_list[MX];
bool vis[MX];
int dis[MX];
int mx;

void bfs(int src)
{
    queue<int> Q;
    vis[src] = 1;
    dis[src] = 0;
    Q.push(src);

    while(!Q.empty())
    {
        int node = Q.front();
        Q.pop();

        for(int i=0; i<adj_list[node].size(); i++)
        {
            int next = adj_list[node][i];

            if (vis[next] == 0)
            {
                vis[next] = 1;
                dis[next] = dis[node]+1;
                mx = max(mx, dis[next]);
                Q.push(next);
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;

        if(x == -1)
            adj_list[0].push_back(i);
        else
            adj_list[x].push_back(i);
    }

    bfs(0);
    cout<<mx<<endl;

    return 0;
}



///DFS
#include <bits/stdc++.h>

using namespace std;

#define MX 2005

typedef long long ll;

vector<int> adj_list[MX];
bool vis[MX];
int dis[MX];
int mx;

void dfs(int src)
{
    vis[src] = 1;

    for(int i=0; i<adj_list[src].size(); i++)
    {
        int next = adj_list[src][i];

        if(vis[next] == 0)
        {
            dis[next] = dis[src]+1;
            mx = max(mx, dis[next]);
            dfs(next);
        }
    }
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;

        if(x == -1)
            adj_list[0].push_back(i);
        else
            adj_list[x].push_back(i);
    }

    dfs(0);
    cout<<mx<<endl;

    return 0;
}
