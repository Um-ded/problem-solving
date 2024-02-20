/// Approach 1 - better idea to find 2nd shortest path only

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

const ll inf = 1e15;
vector<pll > vp, dis;
vector<vector<pll > > adj;
set<pll > st;

void dijkstra(ll src)
{
    dis[src].first = 0;
    st.insert({dis[src].first, src});

    while(!st.empty())
    {
        auto it = st.begin();
        ll u = it->second;
        ll du = it->first;
        st.erase(it);

        for(auto vw:adj[u])
        {
            ll v = vw.first;
            ll w = vw.second;

            if(du+w<dis[v].first)
            {
                dis[v].second = dis[v].first;
                dis[v].first = du+w;
                st.insert({dis[v].first, v});
            }
            else if(du+w>dis[v].first && du+w<dis[v].second)
            {
                dis[v].second = du+w;
                st.insert({dis[v].second, v});
            }
        }
    }
}

void solve()
{
    static ll cs=0;
    ll n, r;
    cin>>n>>r;
    adj.assign(n+2, vp);
    dis.assign(n+2, {inf, inf});

    for(ll i=1; i<=r; i++)
    {
        ll u, v, w;
        cin>>u>>v>>w;
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }

    dijkstra(1);
    cout<<"Case "<<++cs<<": "<<dis[n].second<<endl;
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



/// Approach 2 - general idea to find k-th shortest path

#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"
#define pb      push_back
#define noice   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MX=5005;
vector<int> dis[MX];
vector<pair<int, int> > adj[MX];

void dijkstra(int src, int des)
{
    set<pair<int, int> > st;
    st.insert({0, src});

    while(!st.empty())
    {
        auto it = st.begin();
        int u = it->second;
        int du = it->first;
        st.erase(it);

        if(dis[u].size()==2)
            continue;

        if((dis[u].empty()) || (dis[u].size()==1 && dis[u][0]<du))
            dis[u].pb(du);

        if(dis[des].size()==2)
            break;

        for(auto vw:adj[u])
        {
            int v = vw.first;
            int w = vw.second;

            if(dis[v].size()==2)
                continue;

            st.insert({du+w, v});
        }
    }
}

void solve()
{
    static int cs=0;
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        dis[i] = vector<int>();
        adj[i] = vector<pair<int, int> >();
    }

    for(int i=1; i<=m; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }

    dijkstra(1, n);
    cout<<"Case "<<++cs<<": "<<dis[n][1]<<endl;
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
