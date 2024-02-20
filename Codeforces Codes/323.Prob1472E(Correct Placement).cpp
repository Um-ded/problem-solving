/**Using SEGMENT TREE*/
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

ll ans, hcur, wcur;
vll h, w, htree, wtree;

void find_idx(ll l, ll r, ll pos)
{
    if(htree[pos]>=hcur || wtree[pos]>=wcur || ans!=-1)
        return;

    if(l==r)
    {
        ans = l;
        return;
    }

    ll lc, rc, m;
    lc = 2*pos;
    rc = (2*pos)+1;
    m = l+((r-l)>>1);
    find_idx(l, m, lc);
    find_idx(m+1, r, rc);
}

void seg_tree_build(ll l, ll r, ll pos)
{
    if(l==r)
    {
        htree[pos] = h[l];
        wtree[pos] = w[l];
        return;
    }

    ll lc, rc, m;
    lc = 2*pos;
    rc = (2*pos)+1;
    m = l+((r-l)>>1);
    seg_tree_build(l, m, lc);
    seg_tree_build(m+1, r, rc);
    htree[pos] = min(htree[lc], htree[rc]);
    wtree[pos] = min(wtree[lc], wtree[rc]);
}

void solve()
{
    ll n;
    cin>>n;
    h.assign(n+2, 0);
    w.assign(n+2, 0);
    htree.assign((4*n)+2, 0);
    wtree.assign((4*n)+2, 0);

    for(ll i=1; i<=n; i++)
    {
        cin>>h[i]>>w[i];

        if(h[i]<w[i])
            swap(h[i], w[i]);
    }

    seg_tree_build(1, n, 1);

    for(ll i=1; i<=n; i++)
    {
        ans = -1;
        hcur = h[i];
        wcur = w[i];
        find_idx(1, n, 1);
        cout<<ans<<" \n"[i==n];
    }
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///



///Another submission
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

void solve()
{
    ll n, mn=LLONG_MAX, idx=-1;
    cin>>n;
    vector<vector<ll> > v;
    vll vv(3), ans(n+2, -1);
    v.assign(n, vv);

    for(ll i=0; i<n; i++)
    {
        cin>>v[i][0]>>v[i][1];
        v[i][2] = i+1;

        if(v[i][0]>v[i][1])
            swap(v[i][0], v[i][1]);
    }

    sort(v.begin(), v.end());

    for(ll i=0, j=0; i<n; i=j)
    {
        for( ; j<n && v[j][0]==v[i][0]; j++)
            if(mn<v[j][1])
                ans[v[j][2]] = idx;

        for(ll k=i; k<j; k++)
        {
            if(v[k][1]<mn)
            {
                mn = v[k][1];
                idx = v[k][2];
            }
        }
    }

    for(ll i=1; i<=n; i++)
        cout<<ans[i]<<SS;

    cout<<endl;
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
