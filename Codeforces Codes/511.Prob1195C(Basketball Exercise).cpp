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

ll n;
vll ha, hb, v(2, -1);
vvll dp;

ll dp_func(ll pos, ll cur)
{
    if(pos>n)
        return 0;

    if(dp[pos][cur]!=-1)
        return dp[pos][cur];

    if(!cur)
        dp[pos][cur] = max(dp_func(pos+1, 1-cur)+ha[pos], dp_func(pos+1, cur));
    else
        dp[pos][cur] = max(dp_func(pos+1, 1-cur)+hb[pos], dp_func(pos+1, cur));

    return dp[pos][cur];
}

void solve()
{
    cin>>n;
    ha.assign(n+2, 0);
    hb.assign(n+2, 0);
    dp.assign(n+2, v);

    for(ll i=1; i<=n; i++)
        cin>>ha[i];

    for(ll i=1; i<=n; i++)
        cin>>hb[i];

    ll ans = dp_func(0, 0);
    cout<<ans<<endl;
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
