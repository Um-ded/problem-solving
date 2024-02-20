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

int h, w, ans;
char graph[25][25];
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
    ans++;

    while(!q.empty())
    {
        int xx = q.front().x;
        int yy = q.front().y;
        q.pop();

        for(int i=0; i<4; i++)
        {
            int next_x = xx+dx[i];
            int next_y = yy+dy[i];

            if(next_x>=1 && next_x<=h && next_y>=1 && next_y<=w && !vis[next_x][next_y] && graph[next_x][next_y]=='.')
            {
                vis[next_x][next_y] = 1;
                ans++;
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
        cin>>w>>h;
        int x, y;

        for(int i=1; i<=h; i++)
        {
            for(int j=1; j<=w; j++)
            {
                cin>>graph[i][j];

                if(graph[i][j] == '@')
                {
                    x = i;
                    y = j;
                }
            }
        }

        memset(vis, 0, sizeof(vis));
        ans = 0;
        bfs(x, y);
        cout<<"Case "<<I<<": "<<ans<<endl;
    }

    return 0;
}
