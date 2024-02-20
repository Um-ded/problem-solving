#include <bits/stdc++.h>

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long    ll;

void solve()
{
    ll n, m, l = 0, cur = 0, mx = 0;
    cin>>n>>m;
    vector<ll> v(n+2);

    for(ll i=0; i<n; i++)
        cin>>v[i];

    for(ll i=0; i<n; i++)
    {
        while(cur+v[i] > m)
            cur -= v[l++];

        cur += v[i];
        mx = max(mx, cur);
    }

    cout<<mx<<endl;
}

int main()
{
    noice

    int t = 1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}
