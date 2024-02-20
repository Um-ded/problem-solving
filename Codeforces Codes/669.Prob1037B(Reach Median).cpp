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
    ll n, s, ans=0;
    cin>>n>>s;
    vll v(n);
    ll half = n/2;

    for(ll i=0; i<n; i++)
        cin>>v[i];

    sort(v.begin(), v.end());

    if(s<=v.front())
    {
        for(ll i=0; i<=half; i++)
            ans += (v[i]-s);

    }
    else if(s>=v.back())
    {
        reverse(v.begin(), v.end());

        for(ll i=0; i<=half; i++)
            ans += (s-v[i]);
    }
    else
    {
        for(ll i=half; i>=0; i--)
        {
            if(v[i]<=s)
                break;

            ans += (v[i]-s);
        }

        for(ll i=half; i<n; i++)
        {
            if(v[i]>=s)
                break;

            ans += (s-v[i]);
        }
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
