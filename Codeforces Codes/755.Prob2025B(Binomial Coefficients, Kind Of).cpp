///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define pb           push_back
#define ppb          pop_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

ll big_mod(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;

    while(b)
    {
        if(b&1)
            res = (res*a)%m;

        a = (a*a)%m;
        b >>= 1;
    }

    return res;
}

void solve()
{
    ll tt;
    cin>>tt;
    vll n(tt), k(tt);

    for(ll i=0; i<tt; i++)
        cin>>n[i];

    for(ll i=0; i<tt; i++)
        cin>>k[i];

    for(int i=0; i<tt; i++)
    {
        if((n[i]==k[i]) || (k[i]==0))
            cout<<1<<endl;
        else
            cout<<big_mod(2, k[i]%(mod-1), mod)<<endl;
    }
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
