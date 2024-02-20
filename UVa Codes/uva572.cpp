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

char grid[105][105];
int dx[] = {0, 0, -1, 1, -1, 1, 1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

struct point
{
    int x, y;
};

void bfs(int& a, int& b, int& m, int& n)
{
    queue<point> q;
    q.push({a, b});
    grid[a][b] = 'S';

    while(!q.empty())
    {
        point cur = q.front();
        q.pop();

        for(int i=0; i<8; i++)
        {
            point adj = {(cur.x)+dx[i], (cur.y)+dy[i]};

            if(adj.x>=1 && adj.x<=m && adj.y>=1 && adj.y<=n && grid[adj.x][adj.y]=='@')
            {
                q.push(adj);
                grid[adj.x][adj.y] = 'S';
            }
        }
    }
}

void solve()
{
    int m, n;

    while(cin>>m>>n)
    {
        if(m == 0)
            break;

        for(int i=1; i<=m; i++)
            for(int j=1; j<=n; j++)
                cin>>grid[i][j];

        int ans = 0;

        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(grid[i][j] == '@')
                {
                    ans++;
                    bfs(i, j, m, n);
                }
            }
        }

        cout<<ans<<endl;
    }
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
