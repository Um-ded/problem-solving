#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, ans=0, mn=LLONG_MAX;
    cin>>n;

    for(ll i=0; i<n; i++)
    {
        ll a, b;
        cin>>a>>b;
        mn = min(mn, b);
        ans += a*mn;
    }

    cout<<ans<<endl;
	return 0;
}
