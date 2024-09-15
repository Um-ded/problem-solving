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
    ll n, m, q;
    cin>>n>>m>>q;
    vll vm(m);

    for(ll i=0; i<m; i++)
        cin>>vm[i];

    sort(vm.begin(), vm.end());

    for(ll i=0; i<q; i++)
    {
        ll d;
        cin>>d;

        if(d<vm.front())
        {
            cout<<vm.front()-1<<endl;
        }
        else if(d>vm.back())
        {
            cout<<n-vm.back()<<endl;
        }
        else
        {
            ll l=0;
            ll r=m-1;

            while(l+1<r)
            {
                ll m = l+((r-l)>>1);

                if(vm[m] < d)
                    l = m;
                else
                    r = m;
            }

            cout<<(vm[r]-vm[l])/2<<endl;
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
