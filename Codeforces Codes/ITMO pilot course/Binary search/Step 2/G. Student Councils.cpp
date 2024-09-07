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

ll k, n;
vll v, acc;

bool is_good(ll x)
{
    if(v[n]<x)
        return (acc[n]/x) >= k;

    for(ll i=1; i<=n; i++)
        if(v[i]>=x)
            return ((n-i+1)+(acc[i-1]/x)) >= k;
}

void solve()
{
    cin>>k>>n;
    v.resize(n+2);
    acc.resize(n+2);

    for(ll i=1; i<=n; i++)
        cin>>v[i];

    sort(v.begin()+1, v.begin()+n+1);

    for(ll i=1; i<=n; i++)
        acc[i] = acc[i-1]+v[i];

    ll l = 0;
    ll r = 5*(10e10);

    while(l+1<r)
    {
        ll m = l+((r-l)>>1);

        if(is_good(m))
            l = m;
        else
            r = m;
    }

    cout<<l<<endl;
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
