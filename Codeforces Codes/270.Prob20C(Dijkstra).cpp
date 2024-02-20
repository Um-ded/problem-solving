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
vector<ll> dis, par;
vector<pll > vp;
vector<vector<pll > > adj;
set<pll > st;

void dijkstra(ll srcw, ll src)
{
    dis[src] = 0;
    st.insert({srcw, src});

    while(!st.empty())
    {
        auto it = st.begin();
        ll u = it->second;
        st.erase(it);

        for(auto vw:adj[u])
        {
            ll v = vw.first;
            ll w = vw.second;

            if((dis[u]+w)<dis[v])
            {
                dis[v] = dis[u]+w;
                par[v] = u;
                st.insert({dis[v], v});
            }
        }
    }
}

void solve()
{
    ll v, e;
    cin>>v>>e;
    dis.assign(v+2, inf);
    par.assign(v+2, -1);
    adj.assign(v+2, vp);

    for(ll i=1; i<=e; i++)
    {
        ll u, v, w;
        cin>>u>>v>>w;
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }

    dijkstra(0, 1);

    if(dis[v]!=inf)
    {
        vll path;
        ll n = v;
        path.pb(n);

        while(par[n]!=-1)
        {
            path.pb(par[n]);
            n = par[n];
        }

        for(ll i=path.size()-1; i>=0; i--)
            cout<<path[i]<<" \n"[i==0];
    }
    else
        cout<<-1<<endl;
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
