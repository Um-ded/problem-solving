#include <bits/stdc++.h>

using namespace std;

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long    ll;

bool isprime(ll n)
{
    for(ll i=3; i*i<=n; i+=2)
        if(n%i==0)
            return false;

    return true;
}

void solve()
{
    ll n, ans;
    cin>>n;

    if(n&1)
    {
        if(n>=13)
            ans = 1+((n-9)/4);
        else if(isprime(n))
            ans = -1;
        else
            ans = 1;
    }
    else
    {
        if(n==2)
            ans = -1;
        else
            ans = n/4;
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
