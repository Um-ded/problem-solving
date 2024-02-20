///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define pb           push_back
#define ppb          pop_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

int n, m;
bool iscycle;
vector<string> grid;
vector<vb > vis;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(int x, int y, int par_x, int par_y)
{
    vis[x][y] = true;

    for(int i=0; i<4; i++)
    {
        int u = x+dx[i];
        int v = y+dy[i];

        if(u>0 && u<=n && v>0 && v<=m && (u!=par_x || v!=par_y) && grid[u][v]==grid[x][y])
        {
            if(vis[u][v])
            {
                iscycle = true;
                return;
            }
            else
                dfs(u, v, x, y);
        }
    }
}

void solve()
{
    cin>>n>>m;
    grid = vector<string>(n+2, string(m+2, '.'));
    vis = vector<vb >(n+2, vb(m+2, false));

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>grid[i][j];

    for(int i=1; i<n; i++)
        for(int j=1; j<m; j++)
            if(!iscycle && !vis[i][j])
                dfs(i, j, 0, 0);

    if(iscycle)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
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
