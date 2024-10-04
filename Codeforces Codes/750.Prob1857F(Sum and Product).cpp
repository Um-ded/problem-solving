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

ll bin_search(ll x, ll y, ll l, ll r)
{
    while(l+1<r)
    {
        ll m = (l+r)/2;

        if(m*(x-m)<y)
            l = m;
        else
            r = m;
    }

    return r;
}

void solve()
{
    int n;
    cin>>n;
    vll v(n);

    for(int i=0; i<n; i++)
        cin>>v[i];

    sort(v.begin(), v.end());
    int q;
    cin>>q;

    for(int i=0; i<q; i++)
    {
        ll x, y, a, b;
        cin>>x>>y;

        if(y>=0)
        {
            if(x>=0)
                a = bin_search(x, y, 0, sqrt(y)+1);
            else
                a = -bin_search(-x, y, 0, sqrt(y)+1);
        }
        else
        {
            if(x>=0)
                a = bin_search(x, y, -(sqrt(-y)+1), 0);
            else
                a = -bin_search(-x, y, -(sqrt(-y)+1), 0);
        }

        b = x-a;

        if(a*b == y)
        {
            if(a>b)
                swap(a, b);

            ll c = upper_bound(v.begin(), v.end(), a)-lower_bound(v.begin(), v.end(), a);

            if(a!=b)
            {
                ll d = upper_bound(v.begin(), v.end(), b)-lower_bound(v.begin(), v.end(), b);
                cout<<(c*d)<<" \n"[i==q-1];
            }
            else
                cout<<((c*(c-1))/2)<<" \n"[i==q-1];
        }
        else
            cout<<0<<" \n"[i==q-1];
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
