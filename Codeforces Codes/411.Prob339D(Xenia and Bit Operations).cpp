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

int n, q;
vi v, seg_tree;

void build(int node, int b, int e, int status)
{
    if(b==e)
    {
        seg_tree[node] = v[b];
        return;
    }

    int l, r, m;
    l = (node<<1);
    r = (node<<1)+1;
    m = b+((e-b)>>1);
    build(l, b, m, status-1);
    build(r, m+1, e, status-1);

    if(status&1)
        seg_tree[node] = seg_tree[l]|seg_tree[r];
    else
        seg_tree[node] = seg_tree[l]^seg_tree[r];
}

void update(int node, int b, int e, int p, int val, int status)
{
    if(p<b || e<p)
        return;

    if(p==b && p==e)
    {
        seg_tree[node] = val;
        return;
    }

    int l, r, m;
    l = (node<<1);
    r = (node<<1)+1;
    m = b+((e-b)>>1);
    update(l, b, m, p, val, status-1);
    update(r, m+1, e, p, val, status-1);

    if(status&1)
        seg_tree[node] = seg_tree[l]|seg_tree[r];
    else
        seg_tree[node] = seg_tree[l]^seg_tree[r];
}

void solve()
{
    int status;
    cin>>n>>q;
    status = n;
    n = (1<<n);
    v.assign(n+2, 0);
    seg_tree.assign((2*n)+2, 0);

    for(int i=1; i<=n; i++)
        cin>>v[i];

    build(1, 1, n, status);

    for(int i=1; i<=q; i++)
    {
        int p, val;
        cin>>p>>val;
        update(1, 1, n, p, val, status);
        cout<<seg_tree[1]<<endl;
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
