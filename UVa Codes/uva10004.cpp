#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int> > adj;
vector<bool> color, vis;
bool bicolorable;

void dfs(int par, int node)
{
    vis[node] = true;

    if(!color[par])
        color[node] = true;
    else
        color[node] = false;

    for(auto child: adj[node])
    {
        if(vis[child])
        {
            if(color[node] == color[child])
            {
                bicolorable = false;
                return;
            }
        }
        else
            dfs(node, child);
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    while(cin>>n && n)
    {
        adj.assign(n, vector<int>());
        color.assign(n, false);
        vis.assign(n, false);
        int l;
        cin>>l;

        for(int i=0; i<l; i++)
        {
            int u, v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        color[0] = false;
        bicolorable = true;
        dfs(0, 1);

        if(bicolorable)
            cout<<"BICOLORABLE.\n";
        else
            cout<<"NOT BICOLORABLE.\n";
    }

    return 0;
}
