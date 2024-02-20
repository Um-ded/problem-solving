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

const int MX = 20005;
vi graph[MX];
bool vis[MX], node_type[MX];

int bfs(int src)
{
    int vamp = 0, lyk = 0;
    queue<int> q;
    vis[src] = true;
    node_type[src] = true;
    q.push(src);
    vamp++;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(auto child: graph[cur])
        {
            if(!vis[child])
            {
                vis[child] = true;
                q.push(child);

                if(!node_type[cur])
                {
                    node_type[child] = true;
                    vamp++;
                }
                else
                    lyk++;
            }
        }
    }

    return max(vamp, lyk);
}

void solve()
{
    static int cs = 0;
    int n, ans = 0;
    cin>>n;
    memset(vis, false, sizeof(vis));
    memset(node_type, false, sizeof(node_type));

    for(int i=0; i<MX; i++)
        graph[i] = vi();

    for(int i=1; i<=n; i++)
    {
        int u, v;
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }

    for(int i=1; i<=MX-5; i++)
        if(!vis[i] && !graph[i].empty())
            ans += bfs(i);

    cout<<"Case "<<++cs<<": "<<ans<<endl;
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
