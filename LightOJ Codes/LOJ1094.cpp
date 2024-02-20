/// BFS - this is a special problem. input will be a weighted tree.
/// So BFS is enough. Dijkstra is not needed.

///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
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
#define mod          (long long)1000000007
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

int cs;
vb vis;
vi dis;
vector<pii > v;
vector<vector<pii > > graph;

void bfs(int n)
{
    queue<int> q;
    vis[n] = 1;
    q.push(n);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i].first;
            int w = graph[u][i].second;

            if(!vis[v])
            {
                vis[v] = 1;
                dis[v] = dis[u]+w;
                q.push(v);
            }
        }
    }
}

void solve()
{
    int n, mx, ternode;
    cin>>n;
    vis.assign(n+2, 0);
    dis.assign(n+2, 0);
    graph.assign(n+2, v);

    for(int i=1; i<n; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        graph[u].pb({v, w});
        graph[v].pb({u, w});
    }

    bfs(0);
    mx = 0;

    for(int i=0; i<n; i++)
    {
        if(dis[i]>mx)
        {
            mx = dis[i];
            ternode = i;
        }
    }

    fill(vis.begin(), vis.end(), 0);
    fill(dis.begin(), dis.end(), 0);
    bfs(ternode);
    mx = 0;

    for(int i=0; i<n; i++)
        mx = max(mx, dis[i]);

    cout<<"Case "<<++cs<<": "<<mx<<endl;
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
