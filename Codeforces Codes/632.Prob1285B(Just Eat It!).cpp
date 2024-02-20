#include <bits/stdc++.h>

using namespace std;

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long    ll;

void solve()
{
    ll n, sum;
    cin>>n;
    vector<ll> v(n+2);
    bool ok = true;

    for(ll i=1; i<=n; i++)
        cin>>v[i];

    sum = 0LL;

    for(ll i=1; i<=n; i++)
    {
        sum += v[i];

        if(sum<=0)
        {
            ok = false;
            break;
        }
    }

    sum = 0LL;

    for(ll i=n; i>=1; i--)
    {
        sum += v[i];

        if(sum<=0)
        {
            ok = false;
            break;
        }
    }

    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
