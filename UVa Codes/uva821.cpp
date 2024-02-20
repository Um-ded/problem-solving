#include <bits/stdc++.h>

using namespace std;

int cs, u, v;
const int N = 100, INF = 1e5;
int dis[N+5][N+5];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    while((cin>>u>>v) && (u||v))
    {
        int sum = 0, cnt = 0;

        for(int i=1; i<=N; i++)
            for(int j=1; j<=N; j++)
                if(i!=j)
                    dis[i][j] = INF;

        do
            dis[u][v] = 1;
        while((cin>>u>>v) && (u||v));

        for(int k=1; k<=N; k++)
            for(int i=1; i<=N; i++)
                for(int j=1; j<=N; j++)
                    if(dis[i][k]!=INF && dis[k][j]!=INF && dis[i][k]+dis[k][j]<dis[i][j])
                        dis[i][j] = dis[i][k]+dis[k][j];


        for(int i=1; i<=N; i++)
            for(int j=1; j<=N; j++)
                if(i!=j && dis[i][j]!=INF)
                    sum += dis[i][j], cnt++;

        cout<<"Case "<<++cs<<": average length between pages = "<<fixed<<setprecision(3)<<((double)sum/cnt)<<" clicks\n";
    }

    return 0;
}
