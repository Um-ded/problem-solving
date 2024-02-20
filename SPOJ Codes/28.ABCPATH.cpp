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

int h, w, mx, cs=0;
char grid[52][52];
int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};

struct node
{
    int x, y;
};

void bfs(int sx, int sy)
{
    int mxcur=1;
    bool visited[h+2][w+2]={0};
    queue<node> Q;
    Q.push({sx, sy});
    visited[sx][sy] = true;

    while(!Q.empty())
    {
        int x = Q.front().x;
        int y = Q.front().y;
        Q.pop();

        for(int i=0; i<8; i++)
        {
            int next_x = x+dx[i];
            int next_y = y+dy[i];

            if(next_x>=1 && next_x<=h && next_y>=1 && next_y<=w && !visited[next_x][next_y] && grid[next_x][next_y]-grid[x][y]==1)
            {
                visited[next_x][next_y] = 1;
                mxcur = max(mxcur, grid[next_x][next_y]-64);
                Q.push({next_x, next_y});
            }
        }
    }

    mx = max(mx, mxcur);
}

void solve()
{
    while(cin>>h>>w)
    {
        if(h==0 && w==0)
            break;

        for(int i=1; i<=h; i++)
            for(int j=1; j<=w; j++)
                cin>>grid[i][j];

        mx = 0;

        for(int i=1; i<=h; i++)
            for(int j=1; j<=w; j++)
                if(grid[i][j]=='A')
                    bfs(i, j);

        cout<<"Case "<<++cs<<": "<<mx<<endl;
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
