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
#define EPS          1e-9
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          (long long)1000000007
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

ll mat[1002][1002];

void solve()
{
    ll n, m;
    bool line=0;

    while(cin>>n>>m)
    {
        ll ans=0;

        for(ll i=n; i>=1; i--)
            for(ll j=1; j<=n; j++)
                cin>>mat[i][j];

        if(line)
            cout<<endl;

        line = 1;

        for(ll i=1; i<=n; i++)
            for(ll j=1; j<=n; j++)
                mat[i][j] += mat[i][j-1]+mat[i-1][j]-mat[i-1][j-1];

        for(ll i=n; i>=m; i--)
        {
            for(ll j=m; j<=n; j++)
            {
                ll cur = mat[i][j]-mat[i-m][j]-mat[i][j-m]+mat[i-m][j-m];
                cout<<cur<<endl;
                ans += cur;
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
