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

void solve()
{
    ll A, B, C, D, ans = 0;
    cin>>A>>B>>C>>D;

    for(ll x=A; x<=B; x++)
    {
        ll ymin = max(B, C+1-x);
        ll zrng = D-C+1;
        ll tmin = min(x+ymin-C, zrng);
        ll tmax = min(x, zrng);
        ans += ((tmax*(tmax+1))/2)-((tmin*(tmin-1))/2);

        if(tmax == zrng)
        {
            ll xtra = C-max(B, D-x+1);
            ans += xtra*zrng;
        }
    }

    cout<<ans<<endl;
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
