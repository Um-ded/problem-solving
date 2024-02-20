///Approach 1 - bfs

#include <iostream>
#include <vector>
#include <queue>

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

vector<int> adj[100];
bool color[100], vis[100];
bool bicolorable = true;

void bfs(int src)
{
    queue<int> q;
    color[src] = false;
    vis[src] = 1;
    q.push(src);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(auto v:adj[u])
        {
            if(!vis[v])
            {
                if(color[u]==0)
                    color[v] = 1;
                else
                    color[v] = 0;

                vis[v] = 1;
                q.push(v);
            }
            else
            {
                if(color[u]==color[v])
                {
                    bicolorable = false;
                    break;
                }
            }
        }
    }
}

void solve()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        while(1)
        {
            int j;
            cin>>j;

            if(j==0)
                break;

            adj[i].pb(j);
            adj[j].pb(i);
        }
    }

    bfs(1);

    if(bicolorable)
        for(int i=1; i<=n; i++)
            cout<<color[i];
    else
        cout<<-1;

    cout<<endl;
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



///Approach 2 - dfs

#include <iostream>
#include <vector>

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

vector<int> adj[100];
bool color[100], vis[100];
bool bicolorable = true;

void dfs(int par, int node)
{
    vis[node] = 1;

    if(color[par]==0)
        color[node] = 1;
    else
        color[node] = 0;

    for(auto child:adj[node])
    {
        if(vis[child])
        {
            if(color[node]==color[child])
            {
                bicolorable = false;
                return;
            }
        }
        else
            dfs(node, child);
    }
}

void solve()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        while(1)
        {
            int j;
            cin>>j;

            if(j==0)
                break;

            adj[i].pb(j);
            adj[j].pb(i);
        }
    }

    color[0] = 1;
    dfs(0, 1);

    if(bicolorable)
        for(int i=1; i<=n; i++)
            cout<<color[i];
    else
        cout<<-1;

    cout<<endl;
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
