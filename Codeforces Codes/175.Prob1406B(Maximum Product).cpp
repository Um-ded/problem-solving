#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define pb           push_back
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    ll n, ans=1, pos=0, neg=0;
    cin>>n;
    vector<ll> v(n);

    for(ll i=0; i<n; i++)
    {
        cin>>v[i];

        if(v[i] < 0)
            neg++;
        else
            pos++;
    }

    sort(v.rbegin(), v.rend());

    if((n == 5) || (pos == 0))
    {
        for(ll i=0; i<5; i++)
            ans *= v[i];
    }
    else if((pos >=1) && (pos < 3))
    {
        ans *= v[0];

        for(ll i=0; i<4; i++)
            ans *= v[n-i-1];
    }
    else if((pos >=3) && (pos < 5))
    {
        ll ans1=1, ans2=1;

        ans1 *= v[0];

        for(ll i=0; i<4; i++)
            ans1 *= v[n-i-1];

        ans2 *= (v[0]*v[1]*v[2]);

        for(ll i=0; i<2; i++)
            ans2 *= v[n-i-1];

        ans = max(ans1, ans2);
    }
    else if(pos >= 5)
    {
        ll ans1=1, ans2=1, ans3=1;

        ans1 *= v[0];

        for(ll i=0; i<4; i++)
            ans1 *= v[n-i-1];

        ans2 *= (v[0]*v[1]*v[2]);

        for(ll i=0; i<2; i++)
            ans2 *= v[n-i-1];

        for(ll i=0; i<5; i++)
            ans3 *= v[i];

        ans = max(ans1, ans2);
        ans = max(ans, ans3);
    }

    cout<<ans<<endl;
}

int main()
{
    wow

    int t;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
