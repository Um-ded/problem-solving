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

vvi adj;
vb  vis;
vi topsort;

void dfs(int node)
{
    vis[node] = true;
    sort(adj[node].rbegin(), adj[node].rend());

    for(auto child:adj[node])
        if(!vis[child])
            dfs(child);

    topsort.pb(node);
}

void solve()
{
    int n, m;
    cin>>n>>m;
    adj.resize(n+2);
    vis.resize(n+2);

    for(int i=1; i<=m; i++)
    {
        int v, k;
        cin>>v>>k;

        for(int j=1; j<=k; j++)
        {
            int u;
            cin>>u;
            adj[u].pb(v);
        }
    }

    for(int i=n; i>=1; i--)
        if(!vis[i])
            dfs(i);

    for(int i=n-1; i>=0; i--)
        cout<<topsort[i]<<" \n"[i==0];
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
