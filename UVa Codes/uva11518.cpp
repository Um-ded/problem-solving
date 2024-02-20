#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > adj;
vector<bool> vis;
int ans;

void dfs(int node)
{
    vis[node] = true;
    ans++;

    for(auto child: adj[node])
        if(!vis[child])
            dfs(child);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;

    while(t--)
    {
        int n, m, l;
        cin>>n>>m>>l;
        adj.assign(n+2, vector<int>());
        vis.assign(n+2, false);
        ans = 0;

        for(int i=0; i<m; i++)
        {
            int u, v;
            cin>>u>>v;
            adj[u].push_back(v);
        }

        for(int i=0; i<l; i++)
        {
            int x;
            cin>>x;

            if(!vis[x])
                dfs(x);
        }

        cout<<ans<<"\n";
    }

    return 0;
}
