#include <bits/stdc++.h>

using namespace std;

#define endl         "\n"
#define pll          pair<long long, long long>
#define mod          ((long long)1000000007)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

pll fast_fib(ll n)
{
    if(n==0)
        return {0, 1};

    pll p = fast_fib(n>>1);
    ll a = (p.first*((2*p.second)-p.first))%mod;
    ll b = (((p.second*p.second)%mod)+((p.first*p.first)%mod))%mod;

    if(n&1)
        return {(b+mod)%mod, (a+b+mod)%mod};

    return {(a+mod)%mod, (b+mod)%mod};
}

void solve()
{
    ll n, m;
    cin>>n>>m;
    pll pn = fast_fib(n+1);
    pll pm = fast_fib(m+2);
    ll ans = pm.first-pn.first;
    cout<<(ans+mod)%mod<<endl;
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
