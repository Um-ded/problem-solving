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

#define endl         "\n"
#define pb           push_back
#define ppb          pop_back
#define vi           vector<int>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

const int inf = 1e8;
vi mncost;
vector<pii > vp;
vector<vector<pii> > adj;
set<pii > st;

void dijkstra(int src)
{
    mncost[src] = 0;
    st.insert({mncost[src], src});

    while(!st.empty())
    {
        auto it = st.begin();
        int u = it->second;
        int ucost = it->first;
        st.erase(it);

        if(mncost[u]<ucost)
            continue;

        for(auto vw:adj[u])
        {
            int v = vw.first;
            int w = max(vw.second, ucost);

            if(w<mncost[v])
            {
                mncost[v] = w;
                st.insert({mncost[v], v});
            }
        }
    }
}

void solve()
{
    static int cs=0;
    int n, m;
    cin>>n>>m;
    mncost.assign(n, inf);
    adj.assign(n, vp);

    for(int i=0; i<m; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }

    int src;
    cin>>src;
    dijkstra(src);
    cout<<"Case "<<++cs<<":"<<endl;

    for(int i=0; i<n; i++)
    {
        if(mncost[i]!=inf)
            cout<<mncost[i]<<endl;
        else
            cout<<"Impossible"<<endl;
    }
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
