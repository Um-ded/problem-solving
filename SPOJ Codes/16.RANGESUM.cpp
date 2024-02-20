///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

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
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          (long long)1000000007
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    ll n;/// Used suffix sum. It can also be solved using segment tree and fenwick tree(BIT).
    cin>>n;
    vll vncsum(n);

    for(ll i=0; i<n; i++)
        cin>>vncsum[i];

    vncsum.pb(0);
    reverse(vncsum.begin(), vncsum.end());

    for(ll i=1; i<=n; i++)
        vncsum[i] += vncsum[i-1];

    int q;
    cin>>q;

    for(int i=0; i<q; i++)
    {
        int typ;
        cin>>typ;

        if(typ==1)
        {
            ll l, r, cur;
            cin>>r>>l;
            cur = vncsum[n+1-r]-vncsum[n-l];
            cout<<cur<<endl;
        }
        else
        {
            ll x;
            cin>>x;
            x += vncsum.back();
            vncsum.pb(x);
            n++;
        }
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
