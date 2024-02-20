#include <bits/stdc++.h>

using namespace std;

#define endl                "\n"
#define noice               ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long           ll;

ll lcm(ll a, ll b)
{
    return (a/__gcd(a, b))*b;
}

int main()
{
    noice

    int t=1, cs=0;
    cin>>t;

    while(t--)
    {
        ll n, m, ans=0;
        cin>>n>>m;
        vector<ll> v(m);

        for(ll i=0; i<m; i++)
            cin>>v[i];

        ll choices = 1<<m;

        for(ll i=1; i<choices; i++)
        {
            ll cur = 1;

            for(ll j=0; j<m; j++)
                if(i & (1LL<<j))
                    cur = lcm(cur, v[j]);

            if(1 & __builtin_popcountll(i))
                ans += n/cur;
            else
                ans -= n/cur;
        }

        ans = n-ans;
        cout<<"Case "<<++cs<<": "<<ans<<endl;
    }

    return 0;
}
