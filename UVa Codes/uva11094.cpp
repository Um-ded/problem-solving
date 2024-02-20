#include <bits/stdc++.h>

using namespace std;

int n, m, cnt;
char grid[25][25], land;
bool vis[25][25];

void dfs(int x, int y)
{
    if(x<0 || x>=n || vis[x][y] || grid[x][y]!=land)
        return;

    vis[x][y] = true;
    cnt++;
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, (y+1)%m);
    dfs(x, (y+m-1)%m);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    while(cin>>n>>m)
    {
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin>>grid[i][j];

        int x, y, ans;
        cin>>x>>y;
        land = grid[x][y];
        memset(vis, false, sizeof(vis));
        dfs(x, y);
        ans = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==land && !vis[i][j])
                {
                    cnt = 0;
                    dfs(i, j);
                    ans = max(ans, cnt);
                }
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}
