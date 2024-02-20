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

ll n, m, min_cost;
vector<pll > v;
vector<vector<pll > > graph;

void prims_mst()
{
    ll cnt=0;
    vb in_mst(n+2, 0);
    priority_queue<pll, vector<pll >, greater<pll > > pq;
    pq.push({0, 1});

    while(cnt<n && !pq.empty())
    {
        ll node, cost;
        node = pq.top().second;
        cost = pq.top().first;
        pq.pop();

        if(!in_mst[node])
        {
            min_cost += cost;
            cnt++;
            in_mst[node] = 1;

            for(ll i=0; i<graph[node].size(); i++)
            {
                ll v, v_cost;
                v = graph[node][i].SD;
                v_cost = graph[node][i].FT;

                if(!in_mst[v])
                    pq.push({v_cost, v});
            }
        }
    }
}

void solve()
{
    cin>>n>>m;
    graph.assign(n+2, v);

    for(ll i=0; i<m; i++)
    {
        ll u, v, cost;
        cin>>u>>v>>cost;
        graph[u].pb({cost, v});
        graph[v].pb({cost, u});
    }

    prims_mst();
    cout<<min_cost<<endl;
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
