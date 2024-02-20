#include <bits/stdc++.h>

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;

const int MX = 1005;
int dis[MX];
vector<int> prime_factors[MX];

void sieve()
{
    for(int i=4; i<MX; i+=2)
        prime_factors[i].push_back(2);

    for(int i=3; i<MX; i+=2)
        if(prime_factors[i].empty())
            for(int j=(i+i); j<MX; j+=i)
                prime_factors[j].push_back(i);
}

void bfs(int src, int des)
{
    dis[src] = 0;
    queue<int> Q;
    Q.push(src);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        for(auto x: prime_factors[u])
        {
            int v = u+x;

            if((v <= des) && (dis[v] == -1))
            {
                dis[v] = dis[u]+1;
                Q.push(v);

                if(v == des)
                    break;
            }
        }
    }
}

void solve()
{
    static int cs = 0;
    int s, t;
    cin>>s>>t;
    memset(dis, -1, sizeof(dis));
    bfs(s, t);
    cout<<"Case "<<++cs<<": "<<dis[t]<<endl;
}

int main()
{
    noice

    sieve();
    int t = 1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
