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

int n;
vi x, v;

bool is_good(dbl t)
{
    dbl b = -1e9;
    dbl e = 1e9;

    for(int i=0; i<n; i++)
    {
        dbl cur_b = x[i]-(t*v[i]);
        dbl cur_e = x[i]+(t*v[i]);
        b = max(b, cur_b);
        e = min(e, cur_e);
    }

    if(b>e)
        return false;

    return true;
}

void solve()
{
    cin>>n;
    x.resize(n+2);
    v.resize(n+2);

    for(int i=0; i<n; i++)
        cin>>x[i]>>v[i];

    dbl l = -1;
    dbl r = 2e9;

    for(int i=0; i<64; i++)
    {
        dbl m = (l+r)/2;

        if(is_good(m))
            r = m;
        else
            l = m;
    }

    cout<<setprecision(10)<<r<<endl;
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
