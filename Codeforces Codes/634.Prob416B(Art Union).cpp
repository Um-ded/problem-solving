#include <bits/stdc++.h>

using namespace std;

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long    ll;

void solve()
{
    ll m, n;
    cin>>m>>n;
    ll arr[m+2][n+2];
    vector<ll> ans(m+2);

    for(ll i=1; i<=m; i++)
        for(ll j=1; j<=n; j++)
            cin>>arr[i][j];

    for(ll i=1; i<=m; i++)
        ans[i] = ans[i-1]+arr[i][1];

    for(ll j=2; j<=n; j++)
    {
        for(ll i=1; i<=m; i++)
        {
            if(ans[i]<ans[i-1])
                ans[i] = ans[i-1];

            ans[i] += arr[i][j];
        }
    }

    for(ll i=1; i<=m; i++)
        cout<<ans[i]<<" \n"[i==m];
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
