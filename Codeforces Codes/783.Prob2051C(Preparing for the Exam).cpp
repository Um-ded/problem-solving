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

void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;
    vll vm(m);
    set<ll> st;

    for(ll i=0; i<m; i++)
        cin>>vm[i];

    for(ll i=0; i<k; i++)
    {
        ll x;
        cin>>x;
        st.insert(x);
    }

    if(k==n)
    {
        for(ll i=0; i<m; i++)
            cout<<1;
    }
    else if(k==(n-1))
    {
        for(ll i=0; i<m; i++)
        {
            if(st.find(vm[i])==st.end())
                cout<<1;
            else
                cout<<0;
        }
    }
    else if(k<(n-1))
    {
        for(ll i=0; i<m; i++)
            cout<<0;
    }

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
