///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define pb           push_back
#define ppb          pop_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

int n, m;
ll ans, ways = 1;
vi costs;
vb visited;
vvi graph, rev_graph, components;

void dfs(int node, vvi &adj, vi &output)
{
    visited[node] = true;

    for(auto child: adj[node])
        if(!visited[child])
            dfs(child, adj, output);

    output.pb(node);
}

void scc()
{
    vi order;

    for(int i=1; i<=n; i++)
        if(!visited[i])
            dfs(i, graph, order);

    reverse(order.begin(), order.end());
    fill(visited.begin(), visited.end(), false);

    for(auto u: order)
    {
        if(!visited[u])
        {
            vi component;
            dfs(u, rev_graph, component);
            components.pb(component);
        }
    }
}

void solve()
{
    cin>>n;
    costs.resize(n+2);
    visited.assign(n+2, false);
    graph.assign(n+2, vi());
    rev_graph.assign(n+2, vi());

    for(int i=1; i<=n; i++)
        cin>>costs[i];

    cin>>m;

    for(int i=1; i<=m; i++)
    {
        int u, v;
        cin>>u>>v;
        graph[u].pb(v);
        rev_graph[v].pb(u);
    }

    scc();

    for(int i=0; i<components.size(); i++)
    {
        ll mn = LLONG_MAX, cnt = 0;

        for(auto u: components[i])
            mn = min(mn, (ll)costs[u]);

        for(auto u: components[i])
            if(costs[u] == mn)
                cnt++;

        ans += mn;
        ways = (ways*cnt)%mod;
    }

    cout<<ans<<SS<<ways;
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
