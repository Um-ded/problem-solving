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

vector<vector<pair<int, int> > > graph;
vector<bool> vis;
int cnt;

void dfs(int u, int v, int c)
{
    if(u == v)
        cnt++;

    vis[u] = true;

    for(auto i: graph[u])
    {
        if(!vis[i.first] && i.second==c)
            dfs(i.first, v, c);
    }
}

void solve()
{
    int n, m;
    cin>>n>>m;
    graph.resize(n+2);
    vis.resize(n+2);

    for(int i=0; i<m; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        graph[a].pb({b, c});
        graph[b].pb({a, c});
    }

    int q;
    cin>>q;

    for(int i=0; i<q; i++)
    {
        int u, v;
        cin>>u>>v;
        cnt = 0;

        for(int j=1; j<=m; j++)
        {
            fill(vis.begin(), vis.end(), false);
            dfs(u, v, j);
        }

        cout<<cnt<<endl;
    }
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
