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

vll dp;

void solve()
{
    ll n, x, ans=0;
    cin>>n>>x;
    vll v(n+2);
    dp.assign(n+2, -1e9);

    for(ll i=1; i<=n; i++)
    {
        cin>>v[i];
        v[i] += v[i-1];
    }

    for(ll i=1; i<=n; i++)
        for(ll j=i, k=1; j<=n; j++, k++)
            dp[k] = max(dp[k], v[j]-v[i-1]);

    for(ll i=n-1; i>=0; i--)
        dp[i] = max(dp[i], dp[i+1]);

    for(ll i=0; i<=n; i++)
    {
        ans = max(ans, dp[i]+(i*x));
        cout<<ans<<" \n"[i==n];
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
