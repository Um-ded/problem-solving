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

ll ans;
map<ll, vll > tree;
map<ll, bool> vis;

void dfs(ll node)
{
    vis[node] = true;

    for(ll child: tree[node])
    {
        ans = max(child, ans);

        if(!vis[child])
            dfs(child);
    }
}

void solve()
{
    ll n;
    cin>>n;
    vll v(n+2);
    ans = n;
    tree = map<ll, vll >();
    vis = map<ll, bool>();

    for(ll i=1; i<=n; i++)
    {
        cin>>v[i];
        v[i] += i-1;

        if(i>1)
            tree[v[i]].pb(v[i]+i-1);
    }

    dfs(n);
    cout<<ans<<endl;
}

int main()
{
    noice

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
