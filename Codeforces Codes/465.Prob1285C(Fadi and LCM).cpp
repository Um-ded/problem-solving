#include <bits/stdc++.h>

using namespace std;

#define SS           " "
#define endl         "\n"
#define pb           push_back
#define ll           long long
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll gcd(ll a, ll b)
{
    if(a==0)
        return b;

    return gcd(b%a, a);
}

int main()
{
    noice

    ll x;
    cin>>x;

    if(x==1)
    {
        cout<<1<<SS<<1<<endl;
        return 0;
    }

    vector<pair<ll , ll> > v;

    for(ll i=1; i*i<=x; i++)
        if(!(x%i))
            if(gcd(i, x/i)==1)
                v.pb({x/i, i});

    sort(v.begin(), v.end());
    cout<<v.front().second<<SS<<v.front().first<<endl;

    return 0;
}
