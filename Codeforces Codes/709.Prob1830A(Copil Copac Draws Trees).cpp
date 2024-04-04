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

void bfs(int node, vector<vector<pair<int, int> > > &tree, vector<int> &readings)
{
    queue<pair<int, int> > q;
    q.push({1, 0}); /// step 0

    while(!q.empty())
    {
        int u = q.front().first;
        int r = q.front().second;
        q.pop();

        for(int i=0; i<tree[u].size(); i++)
        {
            if(readings[tree[u][i].first] == INT_MAX)
            {
                q.push(tree[u][i]);

                if(tree[u][i].second > r)
                    readings[tree[u][i].first] = readings[u];
                else
                    readings[tree[u][i].first] = readings[u]+1;
            }
        }
    }
}

void solve()
{
    int n, ans = 0;
    cin>>n;
    vector<vector<pair<int, int> > > tree(n+2);
    vector<int> readings(n+2, INT_MAX);
    readings[1] = 1;

    for(int i=1; i<n; i++)
    {
        int u, v;
        cin>>u>>v;
        tree[u].push_back({v, i});
        tree[v].push_back({u, i});
    }

    bfs(1, tree, readings);

    for(int i=1; i<=n; i++)
        ans = max(ans, readings[i]);

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
