#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"
#define pb      push_back
#define noice   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MX=100;
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

        if(u==des && dis[u].size()==2)
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
    int n, m, cs=0;

    while(cin>>n>>m)
    {
        for(int i=0; i<n; i++)
            adj[i] = vector<pair<int, int> >();

        for(int i=0; i<m; i++)
        {
            int u, v, w;
            cin>>u>>v>>w;
            adj[u].pb({v, w});
            adj[v].pb({u, w});
        }

        cout<<"Set #"<<++cs<<endl;
        int q;
        cin>>q;

        while(q--)
        {
            for(int i=0; i<n; i++)
                dis[i] = vector<int>();

            int a, b;
            cin>>a>>b;
            dijkstra(a, b);

            if(dis[b].size()<2)
                cout<<'?'<<endl;
            else
                cout<<dis[b][1]<<endl;
        }
    }
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
