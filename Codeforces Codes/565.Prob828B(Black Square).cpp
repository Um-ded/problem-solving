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
    int n, m;
    cin>>n>>m;
    char grid[n+2][m+2];
    bool black = false;
    int mnrow = 1e5;
    int mncol = 1e5;
    int mxrow = 0;
    int mxcol = 0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>grid[i][j];

            if(grid[i][j]=='B')
            {
                black = true;
                mnrow = min(mnrow, i);
                mxrow = max(mxrow, i);
                mncol = min(mncol, j);
                mxcol = max(mxcol, j);
            }
        }
    }

    if(black)
    {
        int x = mxrow-mnrow+1;
        int y = mxcol-mncol+1;
        int z = max(x, y);

        if(z>min(n, m))
        {
            cout<<-1<<endl;
            return;
        }

        int cnt = 0;

        for(int i=mnrow; i<=mxrow; i++)
            for(int j=mncol; j<=mxcol; j++)
                if(grid[i][j]=='B')
                    cnt++;

        cout<<(z*z)-cnt<<endl;
    }
    else
        cout<<1<<endl;
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
