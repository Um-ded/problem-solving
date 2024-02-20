#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"

typedef long long   ll;

const int MX = 205, INF = 1e8;
int row, col;
char grid[MX][MX];
int dis[MX][MX];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool isValid(int x, int y)
{
    return (x>=1 && x<=row && y>=1 && y<=col && (grid[x][y]=='.' || grid[x][y]=='J'));
}

bool isEscapable(int x, int y)
{
    return ((x==1 || x==row || y==1 || y==col) && (grid[x][y]=='.' || grid[x][y]=='J'));
}

void fire_bfs()
{
    queue<pair<int, int> > Q;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if(grid[i][j]=='F')
            {
                dis[i][j] = 0;
                Q.push({i, j});
            }
        }
    }

    while(!Q.empty())
    {
        int ux = Q.front().first;
        int uy = Q.front().second;
        Q.pop();

        for(int i=0; i<4; i++)
        {
            int vx = ux+dx[i];
            int vy = uy+dy[i];

            if(isValid(vx, vy) && dis[vx][vy]>dis[ux][uy]+1)
            {
                dis[vx][vy] = dis[ux][uy]+1;
                Q.push({vx, vy});
            }
        }
    }
}

int jane_bfs(int srcx, int srcy)
{
    if(isEscapable(srcx, srcy))
        return 0;

    queue<pair<int, int> > Q;
    dis[srcx][srcy] = 0;
    Q.push({srcx, srcy});

    while(!Q.empty())
    {
        int ux = Q.front().first;
        int uy = Q.front().second;
        Q.pop();

        for(int i=0; i<4; i++)
        {
            int vx = ux+dx[i];
            int vy = uy+dy[i];

            if(isValid(vx, vy) && dis[vx][vy]>dis[ux][uy]+1)
            {
                dis[vx][vy] = dis[ux][uy]+1;

                if(isEscapable(vx, vy))
                    return dis[vx][vy];

                Q.push({vx, vy});
            }
        }
    }

    return -1;
}

void solve()
{
    static int cs = 0;
    int janex, janey, ans;
    cin>>row>>col;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            cin>>grid[i][j];
            dis[i][j] = INF;

            if(grid[i][j]=='J')
            {
                janex = i;
                janey = j;
            }
        }
    }

    fire_bfs();
    ans = jane_bfs(janex, janey);
    cout<<"Case "<<++cs<<": ";

    if(ans==-1)
        cout<<"IMPOSSIBLE"<<endl;
    else
        cout<<ans+1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
