#include <bits/stdc++.h>

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long    ll;

void solve()
{
    int r, c, ans = 0;
    cin>>r>>c;
    int grid[r+2][c+2];
    memset(grid, 0, sizeof(grid));

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>grid[i][j];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(grid[i][j] == 0)
                continue;

            int mxr = r-i;

            for(int x=0; x+j<c; x++)
            {
                if(grid[i][x+j] == 0)
                    break;

                for(int y=0; y<mxr; y++)
                {
                    if(grid[y+i][x+j] == 0)
                    {
                        mxr = y;
                        break;
                    }
                    else
                        ans = max(ans, (y+1)*(x+1));
                }
            }
        }
    }

    cout<<ans<<endl;
}

int main()
{
    noice

    int t = 1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}
