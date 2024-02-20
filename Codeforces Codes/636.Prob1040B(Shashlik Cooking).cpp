#include <bits/stdc++.h>

using namespace std;

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long    ll;

void solve()
{
    int n, k, init;
    cin>>n>>k;
    int unit = (2*k)+1;
    int ans = (n+unit-1)/unit;
    int xtra = (unit*ans)-n;
    cout<<ans<<endl;

    if(xtra>=k)
        init = 1;
    else
        init = (k-xtra)+1;

    for(int i=init; i<=n; i+=unit)
        cout<<i<<" ";

    cout<<endl;
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
