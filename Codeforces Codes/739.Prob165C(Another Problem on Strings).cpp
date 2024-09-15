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
    ll k, ans = 0;
    string s;
    cin>>k>>s;
    ll sz = s.size();

    if(k==0)
    {
        ll zs = 0;

        for(ll i=0; i<sz; i++)
        {
            if(s[i]=='1')
            {
                ans += (zs*(zs+1))/2;
                zs = 0;
            }
            else
                zs++;
        }

        if(zs>0)
            ans += (zs*(zs+1))/2;

        cout<<ans<<endl;
        return;
    }

    ll ks = 0;

    for(ll i=0; i<sz; i++)
        if(s[i]=='1')
            ks++;

    if(ks < k)
    {
        cout<<0<<endl;
        return;
    }

    vll pos(ks+2);
    pos.front() = 0;
    pos.back() = sz+1;
    ks = 0;

    for(ll i=0; i<sz; i++)
        if(s[i]=='1')
            pos[++ks] = i+1;

    for(ll i=1; i+k<ks+2; i++)
    {
        ll x = pos[i]-pos[i-1]-1;
        ll y = pos[i+k]-pos[i+k-1]-1;
        ans += 1+x+y+(x*y);
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
