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

int n, m, nets;
vvi grp;
vi vis, ans;

void dfs(int u)
{
    vis[u] = nets;

    for(auto v: grp[u])
        if(!vis[v])
            dfs(v);
}

void solve()
{
    cin>>n>>m;
    grp.resize(n+2);
    vis.resize(n+2);

    for(int i=0; i<m; i++)
    {
        int x, a, b;
        cin>>x;

        if(x)
        {
            vi v(x);

            for(int i=0; i<x; i++)
            {
                cin>>v[i];

                if(i)
                {
                    grp[v[0]].pb(v[i]);
                    grp[v[i]].pb(v[0]);
                }
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            nets++;
            dfs(i);
        }
    }

    vvi tmp(nets+2);

    for(int i=1; i<=n; i++)
        tmp[vis[i]].pb(i);

    for(int i=1; i<=nets; i++)
        for(auto j: tmp[i])
            vis[j] = tmp[i].size();

    for(int i=1; i<=n; i++)
        cout<<vis[i]<<" \n"[i==n];
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
