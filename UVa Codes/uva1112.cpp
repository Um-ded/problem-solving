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

bool line;
const int inf = 1e8;
vi dis;
vector<pii > vp;
vector<vector<pii > > adj;
set<pii > st;

void dijkstra(int src)
{
    dis[src] = 0;
    st.insert({dis[src], src});

    while(!st.empty())
    {
        auto it = st.begin();
        int u = it->second;
        int du = it->first;
        st.erase(it);

        if(dis[u]<du)
            continue;

        for(auto vw:adj[u])
        {
            int v = vw.first;
            int w = vw.second;

            if(dis[u]+w<dis[v])
            {
                dis[v] = dis[u]+w;
                st.insert({dis[v], v});
            }
        }
    }
}

void solve()
{
    int n, e, time, m, ans=0;
    cin>>n>>e>>time>>m;
    dis.assign(n+2, inf);
    adj.assign(n+2, vp);

    for(int i=1; i<=m; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        adj[v].pb({u, w});
    }

    dijkstra(e);

    for(int i=1; i<=n; i++)
        if(dis[i]<=time)
            ans++;

    if(line)
        cout<<endl;

    line = true;
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
