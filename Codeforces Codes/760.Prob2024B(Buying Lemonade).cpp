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
    ll n, k, ans = 0;
    cin>>n>>k;
    vll v(n);

    for(ll i=0; i<n; i++)
        cin>>v[i];

    sort(v.begin(), v.end());
    ll sub = 0;
    ll left = n;

    for(ll i=0; i<n; )
    {
        ll cur = v[i];
        ll cnt = 0;

        while(i<n && v[i]==cur)
        {
            i++;
            cnt++;
        }

        ll x = (left*(cur-sub))+cnt;
        left -= cnt;
        sub = cur;

        if((x-cnt)<k)
        {
            ans += x;
            k -= (x-cnt);
        }
        else
        {
            ans += k;
            k = 0;
            break;
        }
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
