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

string recipe;
ll rb, rs, rc, nb, ns, nc, pb, ps, pc, money;

bool possible(ll x)
{
    ll ret = (max(0LL, (rb*x)-nb)*pb)+(max(0LL, (rs*x)-ns)*ps)+(max(0LL, (rc*x)-nc)*pc);
    return ret <= money;
}

void solve()
{
    cin>>recipe>>nb>>ns>>nc>>pb>>ps>>pc>>money;
    rb = rs = rc = 0;

    for(int i=0; i<recipe.size(); i++)
    {
        if(recipe[i]=='B')
            rb++;
        else if(recipe[i]=='S')
            rs++;
        else
            rc++;
    }

    ll l = 0;
    ll r = 1e13;

    while(l+1<r)
    {
        ll m = l+((r-l)>>1);

        if(possible(m))
            l = m;
        else
            r = m;
    }

    cout<<l<<endl;
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
