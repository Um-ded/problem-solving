///Value based DP

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

ll cnt[100005], dp[100005];

ll dp_func(ll n)
{
    if(n==0)
        return 0;

    if(n==1)
        return cnt[1];

    if(dp[n]!=-1)
        return dp[n];

    return dp[n] = max(dp_func(n-1), dp_func(n-2)+(n*cnt[n]));
}

void solve()
{
    ll n, mx=0;
    cin>>n;
    vll v(n);

    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        cnt[v[i]]++;
        mx = max(mx, v[i]);
    }

    memset(dp, -1, sizeof(dp));
    ll ans = dp_func(mx);
    cout<<ans<<endl;
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



///Index based DP

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

ll cnt[100005];
vll vv, cc, dp;

ll dp_func(ll n)
{
    if(n==0)
        return (vv[0]*cc[0]);

    if(n==1)
    {
        if(vv[1]-vv[0]==1)
            return max((vv[1]*cc[1]), (vv[0]*cc[0]));
        else
            return (vv[1]*cc[1])+(vv[0]*cc[0]);
    }

    if(dp[n]!=-1)
        return dp[n];

    if(vv[n]-vv[n-1]==1)
        return dp[n] = max(dp_func(n-1), dp_func(n-2)+(vv[n]*cc[n]));
    else
        return dp[n] = dp_func(n-1)+(vv[n]*cc[n]);
}

void solve()
{
    ll n;
    cin>>n;
    set<ll> st;

    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        cnt[x]++;
        st.insert(x);
    }

    for(auto it=st.begin(); it!=st.end(); it++)
        vv.pb(*it);

    for(ll i=0; i<vv.size(); i++)
        cc.pb(cnt[vv[i]]);

    ll sz = vv.size();
    dp.assign(sz, -1);
    ll ans = dp_func(sz-1);
    cout<<ans<<endl;
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
