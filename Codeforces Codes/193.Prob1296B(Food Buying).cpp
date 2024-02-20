///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define gcd          __gcd
#define pb           push_back
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define mod          (long long)998244353
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

ll fact[300005];

void factorial()
{
    fact[0] = 1;

    for(int i=1; i<300005; i++)
        fact[i] = (fact[i-1]*i)%mod;
}

ll bigmod(ll n, ll p, ll m)
{
    if(p == 0)
        return 1%m;

    if(p&1)
    {
        ll p1 = n%m;
        ll p2 = (bigmod(n, p-1, m))%m;

        return (p1*p2)%m;
    }
    else
    {
        ll p1 = (bigmod(n, p/2, m))%m;

        return (p1*p1)%m;
    }
}

ll lcm(ll a, ll b)
{
    return (a/gcd(a, b))*b;
}

void solve()
{
    ll n, ans=0;
    cin>>n;

    while(n>=10)
    {
        ans += n-(n%10);
        n = (n/10)+(n%10);
    }

    cout<<ans+n<<endl;
}

int main()
{
    wow

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
