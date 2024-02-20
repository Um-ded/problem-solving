///Approach 1 - finding cycle

#include <bits/stdc++.h>

using namespace std;

#define endl   "\n"
#define wow    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool ans = 1;
vector<bool> vis;
vector<vector<int> > graph;

void dfs(int child, int parent)
{
    vis[child] = 1;

    for(int i=0; i<graph[child].size(); i++)
        if(vis[graph[child][i]]==1 && graph[child][i]!=parent)
            ans = 0;

    for(int i=0; i<graph[child].size(); i++)
        if(vis[graph[child][i]]==0)
            dfs(graph[child][i], child);
}

int main()
{
    wow

    int m, n;
    cin>>n>>m;

    if(n-1 != m)
        cout<<"NO"<<endl;
    else
    {
        vector<int> v;
        graph.assign(n+2, v);
        vis.assign(n+2, 0);

        for (int i=1; i<=m; i++)
        {
            int u, v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        dfs(1, 0);

        if(ans)
            for(int i=1; i<=n; i++)
                if(vis[i]==0)
                    ans = 0;

        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}



///Approach 2 - without finding cycle(this is easier)

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

vb vis;
vi v;
vvi graph;

void bfs(int src)
{
    queue<int> q;
    vis[src] = true;
    q.push(src);

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        for(int i=0; i<graph[node].size(); i++)
        {
            int next = graph[node][i];

            if(!vis[next])
            {
                vis[next] = 1;
                q.push(next);
            }
        }
    }
}

void solve()
{
    int node, edge;
    cin>>node>>edge;

    if(node-1!=edge)
    {
        cout<<"NO"<<endl;
        return;
    }

    graph.assign(node+2, v);
    vis.assign(node+2, false);

    for(int i=1; i<=edge; i++)
    {
        int u, v;
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }

    bfs(1);

    for(int i=1; i<=node; i++)
    {
        if(!vis[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}

int main()
{
    noice

    int t=1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}
