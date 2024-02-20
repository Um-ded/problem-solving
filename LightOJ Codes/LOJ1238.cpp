///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

#include<bits/stdc++.h>

using namespace std;

#define endl   "\n"
#define ll     long long
#define wow    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int m, n;
char graph[25][25];
int dis[25][25];
bool vis[25][25];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

struct node
{
    int x, y;
};

void bfs(int ax, int by)
{
    queue<node> q;
    q.push({ax, by});
    vis[ax][by] = 1;
    dis[ax][by] = 0;

    while(!q.empty())
    {
        int xx = q.front().x;
        int yy = q.front().y;
        q.pop();

        for(int i=0; i<4; i++)
        {
            int next_x = xx+dx[i];
            int next_y = yy+dy[i];

            if(next_x>=1 && next_x<=m && next_y>=1 && next_y<=n && !vis[next_x][next_y] && graph[next_x][next_y]!='m' && graph[next_x][next_y]!='#')
            {
                vis[next_x][next_y] = 1;
                dis[next_x][next_y] = dis[xx][yy]+1;
                q.push({next_x, next_y});
            }
        }
    }
}

int main()
{
    wow

    int t;
    cin>>t;

    for(int I=1; I<=t; I++)
    {
        int ai, aj, bi, bj, ci, cj, hi, hj, ans;
        cin>>m>>n;

        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cin>>graph[i][j];

                if(graph[i][j] == 'a')
                {
                    ai = i;
                    aj = j;
                }
                else if(graph[i][j] == 'b')
                {
                    bi = i;
                    bj = j;
                }
                else if(graph[i][j] == 'c')
                {
                    ci = i;
                    cj = j;
                }
                else if(graph[i][j] == 'h')
                {
                    hi = i;
                    hj = j;
                }
            }
        }

        memset(vis, 0, sizeof(vis));
        memset(dis, 0, sizeof(dis));
        bfs(hi, hj);
        ans = max(max(dis[ai][aj], dis[bi][bj]), dis[ci][cj]);
        cout<<"Case "<<I<<": "<<ans<<endl;
    }

    return 0;
}
