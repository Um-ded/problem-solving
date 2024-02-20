#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

#define endl    "\n"
#define pb      push_back
#define noice   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MX=1005, inf=1e9;
int dis[MX], par[MX];
map<pair<int, int>, int> mp;
vector<pair<int, int> > adj[MX];

void dijkstra_path(int src)
{
    set<pair<int, int> > st;
    dis[src] = 0;
    st.insert(make_pair(0, src));

    while(!st.empty())
    {
        set<pair<int, int> >::iterator it = st.begin();
        int u = it->second;
        int du = it->first;
        st.erase(it);

        if(dis[u]<du)
            continue;

        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i].first;
            int w = adj[u][i].second;

            if((dis[u]+w)<dis[v])
            {
                dis[v] = dis[u]+w;
                par[v] = u;
                mp[make_pair(u, v)] = w;
                mp[make_pair(v, u)] = w;
                st.insert({dis[v], v});
            }
        }
    }
}

void dijkstra(int src, int U, int V, int W)
{
    int cnt=0;
    set<pair<int, int> > st;
    dis[src] = 0;
    st.insert(make_pair(0, src));

    while(!st.empty())
    {
        set<pair<int, int> >::iterator it = st.begin();
        int u = it->second;
        int du = it->first;
        st.erase(it);

        if(dis[u]<du)
            continue;

        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i].first;
            int w = adj[u][i].second;

            if(((u==U && v==V) || (u==V && v==U)) && w==W)
            {
                cnt++;

                if(cnt==1)
                    continue;
            }

            if((dis[u]+w)<dis[v])
            {
                dis[v] = dis[u]+w;
                st.insert(make_pair(dis[v], v));
            }
        }
    }
}

void solve()
{
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        par[i] = -1;
        dis[i] = inf;
        adj[i] = vector<pair<int, int> >();
    }

    for(int i=1; i<=m; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].pb(make_pair(v, w));
        adj[v].pb(make_pair(u, w));
    }

    mp = map<pair<int, int>, int>();
    dijkstra_path(1);

    if(dis[n]==inf)
    {
        cout<<-1<<endl;
        return;
    }

    int x=n, mx=0;
    vector<int> path;
    path.pb(x);

    while(par[x]!=-1)
    {
        path.pb(par[x]);
        x = par[x];
    }

    for(int i=1; i<path.size(); i++)
    {
        for(int j=1; j<=n; j++)
            dis[j] = inf;

        dijkstra(1, path[i-1], path[i], mp[make_pair(path[i-1], path[i])]);

        if(dis[n]>mx)
            mx = dis[n];
    }

    if(mx==inf)
        cout<<-1<<endl;
    else
        cout<<mx<<endl;
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
