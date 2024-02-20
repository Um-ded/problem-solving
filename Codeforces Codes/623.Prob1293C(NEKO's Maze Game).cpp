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

void solve()
{
    int n, q;
    cin>>n>>q;
    char maze[4][n+2];
    int dx[] = {-1, -1, -1, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 0, 1};
    set<pair<pii, pii > > st;

    for(int i=1; i<=2; i++)
        for(int j=1; j<=n; j++)
            maze[i][j] = '0';

    for(int i=1; i<=q; i++)
    {
        int x, y;
        cin>>x>>y;

        if(maze[x][y]=='0')
        {
            maze[x][y] = '1';

            for(int j=0; j<=5; j++)
            {
                if(x+dx[j]>=1 && x+dx[j]<=2 && y+dy[j]>=1 && y+dy[j]<=n && maze[x+dx[j]][y+dy[j]]=='1')
                {
                    st.insert({{x, y}, {x+dx[j], y+dy[j]}});
                    st.insert({{x+dx[j], y+dy[j]}, {x, y}});
                }
            }
        }
        else
        {
            maze[x][y] = '0';

            for(int j=0; j<=5; j++)
            {
                if(x+dx[j]>=1 && x+dx[j]<=2 && y+dy[j]>=1 && y+dy[j]<=n && maze[x+dx[j]][y+dy[j]]=='1')
                {
                    st.erase({{x, y}, {x+dx[j], y+dy[j]}});
                    st.erase({{x+dx[j], y+dy[j]}, {x, y}});
                }
            }
        }

        if(st.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
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
