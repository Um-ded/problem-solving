#include <bits/stdc++.h>

using namespace std;

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long    ll;

void solve()
{
    int n, ans=1e8;
    cin>>n;
    vector<int> v(n+2), presum(n+2), sufsum(n+2);

    for(int i=1; i<=n; i++)
    {
    	cin>>v[i];

    	if(v[i]>=0)
    		presum[i] = 1;

    	if(v[i]<=0)
    		sufsum[i] = 1;
    }

    for(int i=1; i<=n; i++)
    	presum[i] += presum[i-1];

    for(int i=n; i>=0; i--)
    	sufsum[i] += sufsum[i+1];

    for(int i=1; i<n; i++)
    	ans = min(ans, presum[i]+sufsum[i+1]);

    cout<<ans<<endl;

}

int main()
{
    noice

    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    int t=1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}
