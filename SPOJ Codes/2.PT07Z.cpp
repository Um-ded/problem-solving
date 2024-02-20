#include<bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define MX           10005
#define pb           push_back
#define vi           vector<int>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long  ll;

vi graph[MX];
bool vis[MX];
int dis[MX];

void bfs(int src)
{
    queue<int> Q;
    vis[src] = 1;
    dis[src] = 0;
    Q.push(src);

    while(!Q.empty())
    {
        int node = Q.front();
        Q.pop();

        for(int i=0; i<graph[node].size(); i++)
        {
            int next = graph[node][i];

            if(vis[next]==0)
            {
                vis[next] = 1;
                dis[next] = dis[node]+1;
                Q.push(next);
            }
        }
    }
}

int main()
{
    wow

    int node;
    cin>>node;

    for (int i=1; i<node; i++)
    {
        int u, v;
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }

    bfs(1);
    int mx=0, target;

    for(int i=1; i<=node; i++)
    {
        if(dis[i]>mx)
        {
            mx = dis[i];
            target = i;
        }
    }

    memset(vis, 0, sizeof(vis));
    memset(dis, 0, sizeof(dis));
    bfs(target);
    mx = 0;

    for(int i=1; i<=node; i++)
        mx = max(mx, dis[i]);

    cout<<mx<<endl;
    return 0;
}
