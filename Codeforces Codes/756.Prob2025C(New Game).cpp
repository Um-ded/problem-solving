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
    ll n, k, cnt = 0, ans = 0;
    cin>>n>>k;
    map<ll, ll> mp;

    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }

    for(auto& u: mp)
    {
        if(mp[u.first-1]!=0)
        {
            u.second += mp[u.first-1];
            cnt++;
        }
        else
            cnt = 1;

        if(cnt>k)
            ans = max(ans, u.second-mp[u.first-k]);
        else
            ans = max(ans, u.second);
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
