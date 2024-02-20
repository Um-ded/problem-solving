#include <bits/stdc++.h>

using namespace std;

#define endl                "\n"
#define noice               ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long           ll;
typedef unsigned long long  ull;

int n;
vector<int> v, dp;

int dp_func(int x)
{
    if(x==n)
        return 0;

    if(x>n)
        return 1e9;

    if(dp[x]!=-1)
        return dp[x];

    return dp[x] = min(dp_func(x+1)+abs(v[x+1]-v[x]), dp_func(x+2)+abs(v[x+2]-v[x]));
}

int main()
{
    noice

    cin>>n;
    v.assign(n+2, 0);
    dp.assign(n+2, -1);

    for(int i=1; i<=n; i++)
        cin>>v[i];

    cout<<dp_func(1)<<endl;
    return 0;
}
