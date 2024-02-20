#include <iostream>
#include <vector>
#include <set>

#define endl         "\n"
#define pb           push_back
#define pii          pair<int, int>

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

const int inf = 1e8;

void dijkstra(int src, vector<pii > adj[], int dis[])
{
    set<pii > st;
    dis[src] = 0;
    st.insert(make_pair(dis[src], src));

    while(!st.empty())
    {
        set<pii >::iterator it = st.begin();
        int u = it->second;
        int du = it->first;
        st.erase(it);

        if(dis[u]<du)
            continue;

        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i].first;
            int w = adj[u][i].second;

            if(dis[u]+w<dis[v])
            {
                dis[v] = dis[u]+w;
                st.insert(make_pair(dis[v], v));
            }
        }
    }
}

void solve()
{
    int n, m, x, ans=0;
    cin>>n>>m>>x;
    int dis1[1005], dis2[1005];
    vector<pii > adj1[1005], adj2[1005];

    for(int i=1; i<=n; i++)
    {
        dis1[i] = dis2[i] = inf;
        adj1[i] = adj2[i] = vector<pii >();
    }

    for(int i=1; i<=m; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        adj1[u].pb(make_pair(v, w));
        adj2[v].pb(make_pair(u, w));
    }

    dijkstra(x, adj1, dis1);
    dijkstra(x, adj2, dis2);

    for(int i=1; i<=n; i++)
        ans = max(ans, dis1[i]+dis2[i]);

    cout<<ans<<endl;
}

int main()
{
    int t=1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}
