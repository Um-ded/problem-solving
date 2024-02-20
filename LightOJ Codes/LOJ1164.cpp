#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"

typedef long long    ll;

struct info
{
    ll prop, sum;
};

const int MX = (4e5)+5;
info seg_tree[MX];

void update(ll node, ll b, ll e, ll i, ll j, ll val)
{
    if(j<b || e<i)
        return;

    if(i<=b && e<=j)
    {
        seg_tree[node].sum += ((e-b+1)*val);
        seg_tree[node].prop += val;
        return;
    }

    ll l, r, m;
    l = (node<<1);
    r = (node<<1)+1;
    m = b+((e-b)>>1);
    update(l, b, m, i, j, val);
    update(r, m+1, e, i, j, val);
    seg_tree[node].sum = seg_tree[l].sum+seg_tree[r].sum+((e-b+1)*seg_tree[node].prop);
}

ll query(ll node, ll b, ll e, ll i, ll j, ll carry=0)
{
    if(j<b || e<i)
        return 0;

    if(i<=b && e<=j)
        return ((seg_tree[node].sum)+(carry*(e-b+1)));

    ll l, r, m, q1, q2;
    l = (node<<1);
    r = (node<<1)+1;
    m = b+((e-b)>>1);
    q1 = query(l, b, m, i, j, (carry+seg_tree[node].prop));
    q2 = query(r, m+1, e, i, j, (carry+seg_tree[node].prop));
    return q1+q2;
}

void solve()
{
    static int cs = 0;
    int n,q;
    cin>>n>>q;
    cout<<"Case "<<++cs<<":"<<endl;

    for(int i=0; i<MX; i++)
        seg_tree[i].prop = seg_tree[i].sum = 0LL;

    for(int i=0; i<q; i++)
    {
        int type;
        cin>>type;

        if(type)
        {
            int x, y;
            cin>>x>>y;
            cout<<query(1, 0, n-1, x, y)<<endl;
        }
        else
        {
            int x, y, v;
            cin>>x>>y>>v;
            update(1, 0, n-1, x, y, v);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
