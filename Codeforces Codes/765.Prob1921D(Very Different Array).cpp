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
    ll n, m, diff = 0;
    cin>>n>>m;
    vll vn(n), vm(m);

    for(ll i=0; i<n; i++)
        cin>>vn[i];

    for(ll i=0; i<m; i++)
        cin>>vm[i];

    sort(vn.begin(), vn.end());
    sort(vm.rbegin(), vm.rend());
    ll xtra = m-n;

    for(ll i=0, j=xtra; i<n; i++, j++)
        diff += llabs(vm[j]-vn[i]);

    for(ll i=0; i<n; i++)
    {
        ll cur = diff+(llabs(vm[i]-vn[i]))-(llabs(vm[i+xtra]-vn[i]));
        diff = max(diff, cur);
    }

    cout<<diff<<endl;
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
