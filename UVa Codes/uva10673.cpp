#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"
#define noice   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long    ll;

void solve()
{
    ll x, k;
    cin>>x>>k;

    if(x%k)
    {
        ll q = x%k;
        ll p = k-q;
        cout<<p<<" "<<q<<endl;
    }
    else
        cout<<0<<" "<<k<<endl;
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
