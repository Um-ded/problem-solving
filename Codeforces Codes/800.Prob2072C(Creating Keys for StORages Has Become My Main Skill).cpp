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

void solve()
{
    ll n, x;
    cin>>n>>x;

    if(x&1)
    {
        ll xx = x, p = 0;

        while(xx)
        {
            ll r = xx%2;

            if(r==0)
                break;

            xx /= 2;
            p++;
        }

        ll rng = ((1<<p)-1);

        if(n > rng+1)
        {
            for(ll i=0; i<=rng; i++)
                cout<<i<<SS;

            for(ll i=1; i<(n-rng); i++)
                cout<<x<<" \n"[i==n-rng-1];
        }
        else
        {
            vll vals(n);
            iota(vals.begin(), vals.end(), 0);
            ll orVal = 0LL;

            for(ll i=0; i<n; i++)
                orVal |= vals[i];

            if(orVal!=x)
                vals.back() = x;

            for(ll i=0; i<n; i++)
                cout<<vals[i]<<" \n"[i==n-1];
        }
    }
    else
    {
        for(ll i=1; i<n; i++)
            cout<<0<<SS;

        cout<<x<<endl;
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
