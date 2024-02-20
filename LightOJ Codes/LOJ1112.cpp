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
#define mod          (long long)998244353
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

vll v, BIT;

ll query(ll idx)
{
    ll sum=0;

    while(idx>0)
    {
        sum += BIT[idx];
        idx -= ((idx)&(-idx));
    }

    return sum;
}

void update(ll idx, ll val, ll n)
{
    while(idx<=n)
    {
        BIT[idx] += val;
        idx += ((idx)&(-idx));
    }
}

void solve()
{
    static int cs=0;
    ll n, q;
    cin>>n>>q;
    v.assign(n+2, 0);
    BIT.assign(n+2, 0);

    for(ll i=1; i<=n; i++)
    {
        cin>>v[i];
        update(i, v[i], n);
    }

    cout<<"Case "<<++cs<<":"<<endl;

    while(q--)
    {
        ll op;
        cin>>op;

        if(op == 1)
        {
            ll idx;
            cin>>idx;
            update(idx+1, -v[idx+1], n);
            cout<<v[idx+1]<<endl;
            v[idx+1] = 0;
        }
        else if(op == 2)
        {
            ll idx, val;
            cin>>idx>>val;
            update(idx+1, val, n);
            v[idx+1] += val;
        }
        else
        {
            ll idx1, idx2;
            cin>>idx1>>idx2;
            cout<<query(idx2+1)-query(idx1)<<endl;
        }
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
