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
#define EPS          1e-18
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
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

vll parent, ans;

struct query
{
    ll l, r, c;
};

void make_set(ll n)
{
    for(ll i=1; i<=n; i++)
        parent[i] = i;
}

ll find_set(ll n)
{
    if(parent[n]==n)
        return n;

    return parent[n] = find_set(parent[n]);
}

void solve()
{
    ll n, q;
    cin>>n>>q;
    vector<query> qry(q+2);
    ans.assign(n+2, 0);
    parent.assign(n+2, -1);

    for(ll i=1; i<=q; i++)
        cin>>qry[i].l>>qry[i].r>>qry[i].c;

    make_set(n+1);

    for(ll i=q; i>0; i--)
    {
        ll l, r, c;
        l = qry[i].l;
        r = qry[i].r;
        c = qry[i].c;

        for(ll j=find_set(l); j<=r; j=find_set(j))
        {
            ans[j] = c;
            parent[j] = j+1;
        }
    }

    for(ll i=1; i<=n; i++)
        cout<<ans[i]<<endl;
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
