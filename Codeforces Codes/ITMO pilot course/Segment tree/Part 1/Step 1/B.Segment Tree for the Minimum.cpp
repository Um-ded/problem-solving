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
#define pb           push_back
#define mp           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define mod          (long long)998244353
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

vll v, seg_tree;

void build(ll node, ll b, ll e)
{
    if(b==e)
    {
        seg_tree[node] = v[b];
        return;
    }

    ll l, r, m;
    l = node*2;
    r = (node*2)+1;
    m = b+((e-b)/2);
    build(l, b, m);
    build(r, m+1, e);
    seg_tree[node] = min(seg_tree[l], seg_tree[r]);
}

ll query(ll node, ll b, ll e, ll i, ll j)
{
    if(i>e || j<b)
        return LLONG_MAX;

    if(i<=b && e<=j)
        return seg_tree[node];

    ll l, r, m, q1, q2;
    l = node*2;
    r = (node*2)+1;
    m = b+((e-b)/2);
    q1 = query(l, b, m, i, j);
    q2 = query(r, m+1, e, i, j);
    return min(q1, q2);
}

void update(ll node, ll b, ll e, ll i, ll newvalue)
{
    if(i<b || i>e)
        return;

    if(i==b && i==e)
    {
        seg_tree[node] = newvalue;
        return;
    }

    ll l, r, m;
    l = node*2;
    r = (node*2)+1;
    m = b+((e-b)/2);
    update(l, b, m, i, newvalue);
    update(r, m+1, e, i, newvalue);
    seg_tree[node] = min(seg_tree[l], seg_tree[r]);
}

void solve()
{
    ll n, nn=1, m;
    cin>>n>>m;
    v.assign(n+2, 0);

    while(nn<n)
        nn = (nn<<1);

    seg_tree.assign((2*nn)+2, 0);

    for(ll i=1; i<=n; i++)
        cin>>v[i];

    build(1, 1, n);

    for(ll i=1; i<=m; i++)
    {
        ll op, a, b;
        cin>>op>>a>>b;

        if(op==1)
            update(1, 1, n, a+1, b);
        else
            cout<<query(1, 1, n, a+1, b)<<endl;
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
