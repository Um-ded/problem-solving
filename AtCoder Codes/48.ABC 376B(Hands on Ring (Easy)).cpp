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
    int n, q, l = 1, r = 2, ans = 0;
    cin>>n>>q;

    for(int i=1; i<=q; i++)
    {
        char ch;
        int x, op, mn, mx;
        cin>>ch>>x;

        if(ch=='L')
        {
            op = r;
            mn = min(l, x);
            mx = max(l, x);
            l = x;
        }
        else
        {
            op = l;
            mn = min(r, x);
            mx = max(r, x);
            r = x;
        }

        if(mn<op && op<mx)
            ans += n-mx+mn;
        else
            ans += mx-mn;
    }

    cout<<ans<<endl;
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
