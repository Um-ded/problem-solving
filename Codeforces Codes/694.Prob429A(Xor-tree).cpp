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
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

int n, ans;
vvi tree;
vb vis;
vi init, goal, changes;

void dfs(int node, int dis, int odd_cnt, int even_cnt)
{
    vis[node] = true;

    if(dis%2!=0 && ((odd_cnt%2!=0 && init[node]==goal[node]) || (odd_cnt%2==0 && init[node]!=goal[node])))
    {
        ans++;
        odd_cnt++;
        changes.pb(node);
    }
    else if(dis%2==0 && ((even_cnt%2!=0 && init[node]==goal[node]) || (even_cnt%2==0 && init[node]!=goal[node])))
    {
        ans++;
        even_cnt++;
        changes.pb(node);
    }

    for(auto child: tree[node])
        if(!vis[child])
            dfs(child, dis+1, odd_cnt, even_cnt);
}

void solve()
{
    cin>>n;
    tree.resize(n+2);
    vis.resize(n+2);
    init.resize(n+2);
    goal.resize(n+2);

    for(int i=1; i<n; i++)
    {
        int u, v;
        cin>>u>>v;
        tree[u].pb(v);
        tree[v].pb(u);
    }

    for(int i=1; i<=n; i++)
        cin>>init[i];

    for(int i=1; i<=n; i++)
        cin>>goal[i];

    dfs(1, 0, 0, 0);
    cout<<ans<<endl;

    for(int i=0; i<ans; i++)
        cout<<changes[i]<<endl;
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
