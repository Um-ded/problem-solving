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
    int n, l, r, x, ans = 0;
    cin>>n>>l>>r>>x;
    int rng = 1<<n;
    vi v(n);

    for(int i=0; i<n; i++)
        cin>>v[i];

    for(int i=1; i<rng; i++)
    {
        int cnt = 0, rep = 0, cur = i, tot = 0, mn = INT_MAX, mx = INT_MIN;

        while(cur)
        {
            int rem = cur%2;
            cur /= 2;

            if(rem)
            {
                cnt++;
                tot += v[rep];
                mn = min(mn, v[rep]);
                mx = max(mx, v[rep]);
            }

            rep++;
        }

        if(cnt>=2 && l<=tot && tot<=r && mx-mn>=x)
            ans++;
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
