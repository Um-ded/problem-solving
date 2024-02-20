#include<bits/stdc++.h>

using namespace std;

int h, w, mx=INT_MIN;
char maze[25][25];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

struct node
{
    int x, y;
};

void bfs(int sx, int sy)
{
    bool visited[h+2][w+2]={0};
    int dis[h+2][w+2]={0};
    queue<node> Q;
    Q.push({sx, sy});
    visited[sx][sy] = 1;
    dis[sx][sy] = 0;

    while(!Q.empty())
    {
        int x = Q.front().x;
        int y = Q.front().y;
        Q.pop();

        for(int i=0; i<4; i++)
        {
            int next_x = x+dx[i];
            int next_y = y+dy[i];

            if(next_x>=1 && next_x<=h && next_y>=1 && next_y<=w && !visited[next_x][next_y] && maze[next_x][next_y]=='.')
            {
                visited[next_x][next_y] = 1;
                dis[next_x][next_y] = dis[x][y]+1;
                mx = max(mx, dis[next_x][next_y]);
                Q.push({next_x, next_y});
            }
        }
    }
}

int main()
{
    cin>>h>>w;

    for(int i=1; i<=h; i++)
        for(int j=1; j<=w; j++)
            cin>>maze[i][j];

    for(int i=1; i<=h; i++)
        for(int j=1; j<=w; j++)
            if(maze[i][j]=='.')
                bfs(i, j);

    cout<<mx<<endl;
    return 0;
}
