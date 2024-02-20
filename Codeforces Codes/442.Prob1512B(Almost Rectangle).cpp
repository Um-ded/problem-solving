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
    int n, a, b, c, d;
    cin>>n;
    char s[n+2][n+2];
    a = b = c = d = -1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>s[i][j];

            if(s[i][j]=='*')
            {
                if(a==-1 && b==-1)
                {
                    a = i;
                    b = j;
                }
                else
                {
                    c = i;
                    d = j;
                }
            }
        }
    }

    if(a==c)
    {
        if(a+1<=n)
        {
            s[a+1][b] = '*';
            s[a+1][d] = '*';
        }
        else
        {
            s[a-1][b] = '*';
            s[a-1][d] = '*';
        }
    }
    else if(b==d)
    {
        if(b+1<=n)
        {
            s[a][b+1] = '*';
            s[c][b+1] = '*';
        }
        else
        {
            s[a][b-1] = '*';
            s[c][b-1] = '*';
        }
    }
    else
    {
        s[a][d] = '*';
        s[c][b] = '*';
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout<<s[i][j];

        cout<<endl;
    }
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
