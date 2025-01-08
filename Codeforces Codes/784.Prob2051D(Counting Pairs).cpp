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
    ll n, x, y, sum = 0, ans = 0;
    cin>>n>>x>>y;
    vll v(n);

    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    for(ll i=0; i<n-1; i++)
    {
        ll cursum = sum-v[i];
        ll l = i, r = n, a, b;

        while(l+1<r)
        {
            ll m = l+((r-l)/2);

            if(cursum-v[m]<x)
                r = m;
            else
                l = m;
        }

        b = l;
        l = i, r = n;

        while(l+1<r)
        {
            ll m = l+((r-l)>>1);

            if(cursum-v[m]>y)
                l = m;
            else
                r = m;
        }

        a = r;
        ans += b-a+1;
    }

    cout<<ans<<endl;
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
