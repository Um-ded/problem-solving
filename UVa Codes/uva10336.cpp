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

struct point
{
    int x, y;
};

vector<string> grid;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool cmp(pair<int, char>& a, pair<int, char>& b)
{
    if(a.first>b.first)
        return true;

    return false;
}

void bfs(int& a, int& b, int& h, int& w)
{
    char ch = grid[a][b];
    queue<point> q;
    q.push({a, b});

    while(!q.empty())
    {
        point cur = q.front();
        q.pop();
        grid[cur.x][cur.y] = '.';

        for(int i=0; i<4; i++)
        {
            point adj = {cur.x+dx[i], cur.y+dy[i]};

            if(adj.x>=0 && adj.x<h && adj.y>=0 && adj.y<w && grid[adj.x][adj.y]==ch)
                q.push(adj);
        }
    }
}

void solve()
{
    static int cs = 0;
    int h, w;
    cin>>h>>w;
    grid.assign(h, "");
    map<char, int> cnt;
    vector<pair<int, char> > ans;

    for(int i=0; i<h; i++)
        cin>>grid[i];

    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            if(grid[i][j]!='.')
            {
                cnt[grid[i][j]]++;
                bfs(i, j, h, w);
            }
        }
    }

    for(auto u: cnt)
        ans.pb({u.second, u.first});

    sort(ans.begin(), ans.end(), cmp);
    cout<<"World #"<<++cs<<endl;

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i].second<<": "<<ans[i].first<<endl;
}

int main()
{
    noice

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
