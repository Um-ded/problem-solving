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
    int n, p;
    cin>>n>>p;
    vb in(n+2), vis(n+2);
    vector<pii > out(n+2);
    vector<pair<pii, int> > ans;

    for(int i=1; i<=p; i++)
    {
        int a, b, d;
        cin>>a>>b>>d;
        in[b] = true;
        out[a] = {b, d};
    }

    for(int i=1; i<=n; i++)
    {
        if(!in[i] && out[i].first!=0)
        {
            bool good = true;
            int x = i, mn = out[i].second;

            while(out[x].first!=0)
            {
                if(vis[x])
                {
                    good = false;
                    break;
                }

                vis[x] = true;
                mn = min(mn, out[x].second);
                x = out[x].first;
            }

            if(good)
                ans.pb({{i, x}, mn});
        }
    }

    cout<<ans.size()<<endl;

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i].first.first<<SS<<ans[i].first.second<<SS<<ans[i].second<<endl;
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
