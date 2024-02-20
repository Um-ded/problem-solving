/// BFS

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

void solve()
{
    int cs=0, nc;

    while(cin>>nc)
    {
        if(!nc)
            break;

        map<int, vi > graph;
        int node, ttl;

        for(int i=0; i<nc; i++)
        {
            int x, y;
            cin>>x>>y;
            graph[x].pb(y);
            graph[y].pb(x);
        }

        while(1)
        {
            cin>>node>>ttl;

            if(node==0 && ttl==0)
                break;

            int ans=1;
            queue<int> q;
            map<int, int> dis;
            map<int, bool> vis;
            q.push(node);
            vis[node] = 1;
            dis[node] = 0;

            while(!q.empty())
            {
                int u = q.front();
                q.pop();

                for(int i=0; i<graph[u].size(); i++)
                {
                    int v = graph[u][i];

                    if(vis[v]==0)
                    {
                        vis[v] = 1;
                        dis[v] = dis[u]+1;

                        if(dis[v]<=ttl)
                        {
                            q.push(v);
                            ans++;
                        }
                    }
                }
            }

            cout<<"Case "<<++cs<<": "<<(graph.size()-ans)<<" nodes not reachable from node "<<node<<" with TTL = "<<ttl<<".\n";
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
