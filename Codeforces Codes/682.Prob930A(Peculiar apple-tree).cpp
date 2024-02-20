#include <bits/stdc++.h>

#define SS      " "
#define endl    "\n"
#define noice	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long	ll;

vector<vector<int> > tree;
vector<int> level;
map<int, int> cnt;

void dfs(int u)
{
    for(int i=0; i<tree[u].size(); i++)
    {
        int v = tree[u][i];
        level[v] = level[u]+1;
        cnt[level[v]]++;
        dfs(v);
    }
}

void solve()
{
    int n, ans=0;
    cin>>n;
    tree.resize(n+2);
    level.resize(n+2);

    for(int i=2; i<=n; i++)
    {
        int x;
        cin>>x;
        tree[x].push_back(i);
    }

    level[1] = 1;
    cnt[1]++;
    dfs(1);

    for(auto it:cnt)
        if(it.second&1)
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
