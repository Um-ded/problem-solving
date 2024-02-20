#include <bits/stdc++.h>

using namespace std;

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long    ll;

void solve()
{
    ll n, m, ans=0;
    cin>>n>>m;
    vector<int> k(n+2), c(m+2);

    for(int i=1; i<=n; i++)
        cin>>k[i];

    for(int i=1; i<=m; i++)
        cin>>c[i];

    sort(k.rbegin()+1, k.rend()-1);

    for(int i=1, j=1; i<=n; i++)
    {
        if(c[k[i]]<=c[j])
            ans += c[k[i]];
        else
            ans += c[j++];
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
