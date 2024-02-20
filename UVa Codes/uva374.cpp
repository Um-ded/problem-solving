#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define pi           acos(-1.0)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;

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
    ll b, p, m;

    while(cin>>b>>p>>m)
    {
        ll ans = big_mod(b, p, m)%m;
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
