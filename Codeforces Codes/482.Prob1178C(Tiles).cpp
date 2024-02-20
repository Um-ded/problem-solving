#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define pi           acos(-1.0)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

ll big_mod(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;

    while(b)
    {
        if(b&1)
            res = (res*a)%m;

        a = (a*a)%m;
        b >>= 1;
    }

    return res;
}

void solve()
{
    ll w, h, mod = 998244353;
    cin>>w>>h;
    ll ans = big_mod(2, w+h-2, mod);
    ans *= 4;
    ans %= mod;
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
