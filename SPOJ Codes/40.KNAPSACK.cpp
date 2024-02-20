#include <bits/stdc++.h>

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long    ll;

const int MX = 2005;

void solve()
{
    int n, sz, ans;
    pair<int, int> items[MX];
    cin>>sz>>n;
    int dp[n+5][sz+5];
    memset(dp, 0, sizeof(dp));

    for(int i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;
        items[i] = {x, y};
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=sz; j++)
        {
            if(items[i-1].first <= j)
                dp[i][j] = max((items[i-1].second)+(dp[i-1][j-items[i-1].first]), dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    ans = dp[n][sz];
    cout<<ans<<endl;
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
