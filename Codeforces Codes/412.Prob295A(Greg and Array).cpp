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
#define pii          pair<int, int>
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

struct op
{
    ll l, r, d;
};

void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;
    vll v(n+2), vv(n+2), qcnt(m+2);
    vector<op> opv(m+2);

    for(ll i=1; i<=n; i++)
        cin>>v[i];

    for(ll i=1; i<=m; i++)
        cin>>opv[i].l>>opv[i].r>>opv[i].d;

    for(ll i=1; i<=k; i++)
    {
        int x, y;
        cin>>x>>y;
        qcnt[x]++;
        qcnt[y+1]--;
    }

    for(ll i=1; i<=m; i++)
    {
        qcnt[i] += qcnt[i-1];
        vv[opv[i].l] += qcnt[i]*opv[i].d;
        vv[(opv[i].r)+1] -= qcnt[i]*opv[i].d;
    }

    for(ll i=1; i<=n; i++)
    {
        vv[i] += vv[i-1];
        cout<<(v[i]+vv[i])<<SS;
    }

    cout<<endl;
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
