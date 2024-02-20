///Using memset(dp, -1, sizeof(dp))

///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
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

const int inf = 1e9;
vector<tuple<int, int, int> > grid[505][505];
int dp[505][505][25];

int dp_func(int i, int j, int k)
{
    if(k==0)
        return 0;

    if(dp[i][j][k]!=-1)
        return dp[i][j][k];

    int ret = inf;

    for(auto [x, y, z]:grid[i][j])
        ret = min(ret, dp_func(x, y, k-2)+(2*z));

    return dp[i][j][k] = ret;
}

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<m; j++)
        {
            int x;
            cin>>x;
            grid[i][j].push_back({i, j+1, x});
            grid[i][j+1].push_back({i, j, x});
        }
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            int x;
            cin>>x;
            grid[i][j].push_back({i+1, j, x});
            grid[i+1][j].push_back({i, j, x});
        }
    }

    if(k&1)
    {
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                cout<<-1<<" \n"[j==m];

        return;
    }

    memset(dp, -1, sizeof(dp));

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            int mnexibit = dp_func(i, j, k);
            cout<<mnexibit<<" \n"[j==m];
        }
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///



///Using vis array

///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
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

const int inf = 1e9;
vector<tuple<int, int, int> > grid[505][505];
int dp[505][505][25];
bool vis[505][505][25];

int dp_func(int i, int j, int k)
{
    if(k==0)
        return 0;

    if(vis[i][j][k]==1)
        return dp[i][j][k];

    int ret = inf;

    for(auto [x, y, z]:grid[i][j])
        ret = min(ret, dp_func(x, y, k-2)+(2*z));

    vis[i][j][k] = 1;
    return dp[i][j][k] = ret;
}

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<m; j++)
        {
            int x;
            cin>>x;
            grid[i][j].push_back({i, j+1, x});
            grid[i][j+1].push_back({i, j, x});
        }
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            int x;
            cin>>x;
            grid[i][j].push_back({i+1, j, x});
            grid[i+1][j].push_back({i, j, x});
        }
    }

    if(k&1)
    {
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                cout<<-1<<" \n"[j==m];

        return;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            int mnexibit = dp_func(i, j, k);
            cout<<mnexibit<<" \n"[j==m];
        }
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
