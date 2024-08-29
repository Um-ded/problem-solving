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
    ll n, sum = 0, ans = 0;
    cin>>n;
    vll v(n+2);

    for(ll i=1; i<=n; i++)
    {
        cin>>v[i];
        sum += v[i];
    }

    if(sum%3)
    {
        cout<<0<<endl;
        return;
    }

    vll cnt(n+2);
    ll cursum = 0, sb3 = sum/3;


    for(ll i=n; i>2; i--)
    {
        cursum += v[i];

        if(cursum == sb3)
            cnt[i] = 1;

        cnt[i] += cnt[i+1];
    }

    cursum = 0;

    for(ll i=1; i<n-1; i++)
    {
        cursum += v[i];

        if(cursum == sb3)
            ans += cnt[i+2];
    }

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
