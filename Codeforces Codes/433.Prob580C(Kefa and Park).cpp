/// Approach 1 - ekta dfs

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

int n, m, ans;
vi v, x, vis, cats, cnt;
vvi tree;

void dfs(int par, int node)
{
    vis[node] = 1;

    if(v[node])
        cats[node] = cats[par]+v[node];
    else
        cats[node] = 0;

    if(cats[node]>m)
        return;

    for(auto child:tree[node])
        if(!vis[child])
            dfs(node, child);
}

void solve()
{
    cin>>n>>m;
    v.assign(n+2, 0);
    vis.assign(n+2, 0);
    cnt.assign(n+2, 0);
    cats.assign(n+2, 0);
    tree.assign(n+2, x);

    for(int i=1; i<=n; i++)
        cin>>v[i];

    for(int i=1; i<n; i++)
    {
        int u, v;
        cin>>u>>v;
        cnt[u]++;
        cnt[v]++;
        tree[u].pb(v);
        tree[v].pb(u);
    }

    dfs(0, 1);

    for(int i=2; i<=n; i++)
        if(cnt[i]==1 && vis[i]==1 && cats[i]<=m)
            ans++;

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



/// Approach 2 - duita dfs

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
vi cats, cons;
vvi tree;

void dfs1(int par, int node)
{
    vis[node] = true;

    if(cats[node])
        cons[node] = cons[par]+1;
    else
        cons[node] = 0;

    for(auto v: tree[node])
        if(!vis[v])
            dfs1(node, v);
}

void dfs2(int par, int node)
{
    vis[node] = true;
    cons[node] = max(cons[par], cons[node]);

    for(auto v: tree[node])
        if(!vis[v])
            dfs2(node, v);
}

void solve()
{
    int n, m, ans = 0;
    cin>>n>>m;
    vis.resize(n+2);
    cats.resize(n+2);
    cons.resize(n+2);
    tree.resize(n+2);

    for(int i=1; i<=n; i++)
        cin>>cats[i];

    for(int i=1; i<n; i++)
    {
        int u, v;
        cin>>u>>v;
        tree[u].pb(v);
        tree[v].pb(u);
    }

    dfs1(0, 1);
    fill(vis.begin(), vis.end(), false);
    dfs2(0, 1);

    for(int i=2; i<=n; i++)
        if(((int)tree[i].size())==1 && cons[i]<=m)
            ans++;

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
