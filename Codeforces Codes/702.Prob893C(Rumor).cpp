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

vector<ll> costs;
vector<vector<int> > graph;
vector<bool> visited;

ll dfs(int node, ll mn)
{
    visited[node] = true;

    for(int i=0; i<graph[node].size(); i++)
        if(!visited[graph[node][i]])
            mn = min(mn, dfs(graph[node][i], mn));

    return min(mn, costs[node]);
}

void solve()
{
    int n, m;
    ll ans = 0LL;
    cin>>n>>m;
    costs.resize(n+2);
    graph.resize(n+2);
    visited.resize(n+2);

    for(int i=1; i<=n; i++)
        cin>>costs[i];

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=1; i<=n; i++)
        if(!visited[i])
            ans += dfs(i, INT_MAX);

    cout<<ans<<endl;
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
