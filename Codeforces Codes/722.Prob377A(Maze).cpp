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
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

int n, m, k, s;
vector<string> grid;
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

void dfs2D(int u, int v)
{
    if(k == s)
        return;

    grid[u][v] = '.';
    s--;

    for(int i=0; i<4; i++)
        if(u+dx[i]>=0 && u+dx[i]<n && v+dy[i]>=0 && v+dy[i]<m && grid[u+dx[i]][v+dy[i]]=='X')
            dfs2D(u+dx[i], v+dy[i]);
}

void solve()
{
    int x, y;
    cin>>n>>m>>k;
    grid.resize(n);

    for(int i=0; i<n; i++)
    {
        cin>>grid[i];

        for(int j=0; j<m; j++)
        {
            if(grid[i][j] == '.')
            {
                grid[i][j] = 'X';
                x = i;
                y = j;
                s++;
            }
        }
    }

    dfs2D(x, y);

    for(int i=0; i<n; i++)
        cout<<grid[i]<<endl;
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
