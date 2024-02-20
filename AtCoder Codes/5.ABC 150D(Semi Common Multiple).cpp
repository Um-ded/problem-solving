///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define gcd          __gcd
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

ll lcm(ll a, ll b)
{
    return (a/gcd(a, b))*b;
}

void solve()
{
    ///D done
    ll n, m, a, mx, sz, ans=0;
    cin>>n>>m;
    vector<ll> v(n);

    for(ll i=0; i<n; i++)
        cin>>v[i];

    a = (v[0]/2)&1;

    for(ll i=1; i<n; i++)
    {
        if(((v[i]/2)&1) != a)
        {
            cout<<0<<endl;
            return;
        }
    }

    sort(v.rbegin(), v.rend());
    mx = v[0];
    sz = unique(v.begin(), v.end())-v.begin();

    for(ll i=(mx/2); i<=m; i+=mx)
    {
        bool flg = 1;

        for(ll j=1; j<sz; j++)
        {
            if(i%v[j] != v[j]/2)
            {
                flg = 0;
                break;
            }
        }

        if(flg)
            ans++;
    }

    cout<<ans<<endl;
}

int main()
{
    wow

    int t=1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
