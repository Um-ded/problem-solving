#include<bits/stdc++.h>

using namespace std;

#define endl   "\n"
#define wow    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<vector<int> > graph;
vector<int> dis, v;
vector<bool> vis;

void bfs(int s)
{
    queue<int> q;
    dis[s] = 0;
    vis[s] = 1;
    q.push(s);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];

            if(vis[v]==0)
            {
                vis[v] = 1;
                dis[v] = dis[u]+6;
                q.push(v);
            }
        }
    }
}

int main()
{
    wow

    int t;
    cin>>t;

    while(t--)
    {
        int n, m, s;
        cin>>n>>m;

        graph.assign(n+2, v);
        dis.assign(n+2, -1);
        vis.assign(n+2, 0);

        for(int i=1; i<=m; i++)
        {
            int u, v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        cin>>s;
        bfs(s);

        for(int i=1; i<=n; i++)
            if(i!=s)
                cout<<dis[i]<<" ";

        cout<<endl;
    }

    return 0;
}
