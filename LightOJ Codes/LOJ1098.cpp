#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"
#define noice   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long    ll;

void solve()
{
    static int cs = 0;
    ll n, ans = 0LL;
    cin>>n;

    for(ll i=2; (i*i)<=n; i++)
    {
        ll j = n/i;
        ans += ((((j-i)*2)+1)*i)+(((j-i)*(j-i+1))/2);
    }

    cout<<"Case "<<++cs<<": "<<ans<<endl;
}

int main()
{
    noice

    int t = 1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
