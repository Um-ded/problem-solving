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
    int n, k = 0;
    cin>>n;
    vi v;
    v.pb(2);
    v.pb(1);
    int p = 1;

    while(p<=n)
        p *= 2;

    if((n&1) || (p/2 == n))
    {
        if(n&1)
            k = n;
        else
            k = p-1;

        for(int i=3; i<=n; i++)
            v.pb(i);
    }
    else
    {
        k = p-1;
        p /= 2;

        for(int i=3; i<=n; i++)
        {
            if(i==(p-1) || i==p)
                continue;

            v.pb(i);
        }

        v.pb(p);
        v.pb(p-1);
    }

    cout<<k<<endl;

    for(int i=0; i<n; i++)
        cout<<v[i]<<SS;

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
