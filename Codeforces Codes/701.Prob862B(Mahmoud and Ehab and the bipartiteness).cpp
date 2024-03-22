/// Approach 1 - DFS

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

void dfs(int node, int parent, int color, vector<vector<int> > &tree, vector<ll> &colors)
{
    colors[color]++;

    for(int i=0; i<tree[node].size(); i++)
        if(tree[node][i]!=parent)
            dfs(tree[node][i], node, !color, tree, colors);
}

void solve()
{
    int n;
    cin>>n;
    vector<vector<int> > tree(n+2);
    vector<ll> colors(2);

    for(int i=1; i<n; i++)
    {
        int u, v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, 0, 0, tree, colors);
    ll ans = (colors[0]*colors[1])-(n-1);
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



/// Approach 2 - BFS and Set

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

void solve()
{
    int n;
    ll ans = 0LL;
    cin>>n;
    vector<vector<int> > tree(n+2);

    for(int i=1; i<n; i++)
    {
        int u, v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    queue<int> q;
    vector<bool> vis(n+2);
    set<int> set1, set2;

    vis[1] = true;
    set1.insert(1);

    for(int i=0; i<tree[1].size(); i++)
    {
        q.push(tree[1][i]);
        set2.insert(tree[1][i]);
    }

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        if(vis[cur])
            continue;

        vis[cur] = true;

        if(set1.find(cur)!=set1.end())
        {
            for(int i=0; i<tree[cur].size(); i++)
            {
                q.push(tree[cur][i]);
                set2.insert(tree[cur][i]);
            }
        }
        else
        {
            for(int i=0; i<tree[cur].size(); i++)
            {
                q.push(tree[cur][i]);
                set1.insert(tree[cur][i]);
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(set1.find(i) != set1.end())
            ans += ((ll)set2.size())-((ll)tree[i].size());
        else
            ans += ((ll)set1.size())-((ll)tree[i].size());
    }

    ans /= 2LL;
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
