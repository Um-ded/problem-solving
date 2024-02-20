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

ll dp[100005][30];
string s;
ll sz;

ll dp_func(ll i, char pre)
{
    if(i==sz)
        return 1;

    if(dp[i][pre-97]!=-1)
        return dp[i][pre-97];

    if(s[i]=='u' && pre=='u')
        dp[i][pre-97] = ((dp_func(i+1, 'u')%mod)+(dp_func(i+1, 'w')%mod))%mod;
    else if(s[i]=='n' && pre=='n')
        dp[i][pre-97] = ((dp_func(i+1, 'n')%mod)+(dp_func(i+1, 'm')%mod))%mod;
    else
        dp[i][pre-97] = dp_func(i+1, s[i])%mod;

    return dp[i][pre-97];
}

void solve()
{
    cin>>s;
    sz = s.size();

    for(ll i=0; i<sz; i++)
    {
        if(s[i]=='m' || s[i]=='w')
        {
            cout<<0<<endl;
            return;
        }
    }

    memset(dp, -1, sizeof(dp));
    ll ans = dp_func(0, 'a');
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
