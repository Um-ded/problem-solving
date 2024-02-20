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
    set<int> red, white;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>grid[i][j];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(grid[i][j]=='R')
                red.insert((i+j)%2);
            else if(grid[i][j]=='W')
                white.insert((i+j)%2);
        }
    }

    if(red.size()<=1 && white.size()<=1)
    {
        int r, w;

        if(red.size() && white.size())
        {
            r = *(red.begin());
            w = *(white.begin());
        }
        else if(red.size())
        {
            r = *(red.begin());

            if(r==0)
                w = 1;
            else
                w = 0;
        }
        else if(white.size())
        {
            w = *(white.begin());

            if(w==0)
                r = 1;
            else
                r = 0;
        }
        else
        {
            r = 0;
            w = 1;
        }


        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(grid[i][j]=='.')
                {
                    int x = (i+j)%2;

                    if(x==r)
                        grid[i][j] = 'R';
                    else
                        grid[i][j] = 'W';
                }
            }
        }

        bool ok = true;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(i-1>0)
                {
                    if(grid[i-1][j]==grid[i][j])
                        ok = false;
                }

                if(j-1>0)
                {
                    if(grid[i][j-1]==grid[i][j])
                        ok = false;
                }

                if(i+1<=n)
                {
                    if(grid[i+1][j]==grid[i][j])
                        ok = false;
                }

                if(j+1<=m)
                {
                    if(grid[i][j+1]==grid[i][j])
                        ok = false;
                }
            }
        }

        if(ok)
        {
            cout<<"YES"<<endl;

            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=m; j++)
                    cout<<grid[i][j];

                cout<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
