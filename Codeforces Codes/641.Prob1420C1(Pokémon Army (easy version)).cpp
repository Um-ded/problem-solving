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

ll n, q;
vll v;
ll dp[300005][2];

ll no_fun(ll i, char ch)
{
    if(i>n)
        return 0;

    if(ch=='-')
    {
        if(dp[i][0]!=-1)
            return dp[i][0];

        return dp[i][0] = max(no_fun(i+1, '+')-v[i], no_fun(i+1, '-'));
    }
    else
    {
        if(dp[i][1]!=-1)
            return dp[i][1];

        return dp[i][1] = max(no_fun(i+1, '-')+v[i], no_fun(i+1, '+'));
    }
}

void solve()
{
    cin>>n>>q;
    v.resize(n+2);
    memset(dp, -1, sizeof(dp));

    for(ll i=1; i<=n; i++)
        cin>>v[i];

    cout<<no_fun(1, '+')<<endl;
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
