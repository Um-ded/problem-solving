///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define pb           push_back
#define ppb          pop_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

ll n, k;
vll v;
ll tot, mx;

bool possible(ll x)
{
    ll ret = 0;
    ll cur = 0;

    for(ll i=0; i<n; )
    {
        while(i<n && cur+v[i]<=x)
            cur += v[i++];

        ret++;
        cur = 0;
    }

    return ret<=k;
}

void solve()
{
    cin>>n>>k;
    v.resize(n);

    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        mx = max(mx, v[i]);
        tot += v[i];
    }

    ll l = mx-1;
    ll r = tot;

    while(l+1<r)
    {
        ll m = l+((r-l)>>1);

        if(possible(m))
            r = m;
        else
            l = m;
    }

    cout<<r<<endl;
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
