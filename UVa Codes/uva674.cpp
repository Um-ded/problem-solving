#include <bits/stdc++.h>

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long    ll;

int dp[7][7500];

void solve()
{
    int n, coins[] = {0, 1, 5, 10, 25, 50};

    while(cin>>n)
    {
        if(n==0)
        {
            cout<<1<<endl;
            continue;
        }

        memset(dp, 0, sizeof(dp));

        for(int i=0; i<7; i++)
            dp[i][0] = 1;

        for(int i=1; i<=5; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(j>=coins[i])
                    dp[i][j] = dp[i-1][j]+dp[i][j-coins[i]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }

        cout<<dp[5][n]<<endl;
    }
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
