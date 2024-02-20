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
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    ll n, k, ans=0;
    cin>>n>>k;
    vll a, b;

    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;

        if(x<0)
            a.pb(x);
        else
            b.pb(x);
    }

    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());
    ll sza = a.size();
    ll szb = b.size();


    if(sza && szb)
    {
        ll pans1, pans2;
        pans1 = pans2 = 0LL;

        for(ll i=sza-k-1; i>=0; i-=k)
        {
            pans1 += abs(a[i])*2;
            pans2 += abs(a[i])*2;
        }

        for(ll i=szb-k-1; i>=0; i-=k)
        {
            pans1 += b[i]*2;
            pans2 += b[i]*2;
        }

        pans1 += (abs(a.back())*2)+b.back();
        pans2 += abs(a.back())+(b.back()*2);
        ans = min(pans1, pans2);
    }
    else
    {
        if(sza)
        {
            for(ll i=sza-k-1; i>=0; i-=k)
                ans += abs(a[i])*2;

            ans += abs(a.back());
        }
        else
        {
            for(ll i=szb-k-1; i>=0; i-=k)
                ans += b[i]*2;

            ans += b.back();
        }
    }

    cout<<ans<<endl;
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
