/// Approach 1 - bfs from every node

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

bool bfs2D(int u, int v, int n, int m, string &dir_n, string &dir_m)
{
    vector<vector<bool> > vis(n, vector<bool>(m));
    queue<pair<int, int> > q;
    vis[u][v] = true;
    q.push({u, v});

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        int a = (dir_m[y]=='v')?x+1:x-1;
        int b = (dir_n[x]=='<')?y-1:y+1;

        if(a>=0 && a<n && !vis[a][y])
        {
            q.push({a, y});
            vis[a][y] = true;
        }

        if(b>=0 && b<m && !vis[x][b])
        {
            q.push({x, b});
            vis[x][b] = true;
        }
    }

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(!vis[i][j])
                return false;

    return true;
}

void solve()
{
    int n, m;
    string dir_n, dir_m;
    cin>>n>>m>>dir_n>>dir_m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(!bfs2D(i, j, n, m, dir_n, dir_m))
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;
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



/// Approach 2 - double bfs from a single node to check every node is reachable from that node and vice versa

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

bool bfs2D(int u, int v, int n, int m, string &dir_n, string &dir_m)
{
    vector<vector<bool> > vis(n, vector<bool>(m));
    queue<pair<int, int> > q;
    vis[u][v] = true;
    q.push({u, v});

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        int a = (dir_m[y]=='v')?x+1:x-1;
        int b = (dir_n[x]=='<')?y-1:y+1;

        if(a>=0 && a<n && !vis[a][y])
        {
            q.push({a, y});
            vis[a][y] = true;
        }

        if(b>=0 && b<m && !vis[x][b])
        {
            q.push({x, b});
            vis[x][b] = true;
        }
    }

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(!vis[i][j])
                return false;

    return true;
}

void solve()
{
    int n, m;
    string dir_n, dir_m;
    cin>>n>>m>>dir_n>>dir_m;

    if(!bfs2D(0, 0, n, m, dir_n, dir_m))
    {
        cout<<"NO"<<endl;
        return;
    }

    for(int i=0; i<n; i++)
        dir_n[i] = (dir_n[i]=='<')?'>':'<';

    for(int i=0; i<m; i++)
        dir_m[i] = (dir_m[i]=='v')?'^':'v';

    if(!bfs2D(0, 0, n, m, dir_n, dir_m))
    {
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
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
