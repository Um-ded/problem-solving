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
vi route;

void dfs(int step)
{
    vis[step] = true;

    for(auto child:adj[step])
        if(!vis[child])
            dfs(child);

    route.pb(step);
}

void solve()
{
    static int cs = 0;
    int n, cnt = 1;
    cin>>n;
    adj.assign(n+2, vi());
    vis.assign(n+2, false);
    route = vi();
    vector<string> steps(n+2);
    map<string, int> stepMarks;

    for(int i=1; i<n; i++)
    {
        string u, v;
        cin>>u>>v;

        if(!stepMarks[u])
        {
            stepMarks[u] = cnt++;
            steps[stepMarks[u]] = u;
        }

        if(!stepMarks[v])
        {
            stepMarks[v] = cnt++;
            steps[stepMarks[v]] = v;
        }

        adj[stepMarks[u]].pb(stepMarks[v]);
    }

    for(int i=1; i<=n; i++)
        if(!vis[i])
            dfs(i);

    cout<<"Scenario #"<<++cs<<":"<<endl;

    for(int i=n-1; i>=0; i--)
        cout<<steps[route[i]]<<endl;

    cout<<endl;
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
