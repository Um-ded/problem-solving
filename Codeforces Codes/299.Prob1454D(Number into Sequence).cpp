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
#define mp           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define mod          (long long)998244353
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    ll n, nn, mul=1;
    cin>>n;
    pll p={LLONG_MIN, LLONG_MIN};
    nn = n;

    for(ll i=2; i*i<=nn; i++)
    {
        ll cnt=0;

        while(nn%i==0)
        {
            nn /= i;
            cnt++;
        }

        if(cnt>p.second)
        {
            p.first = i;
            p.second = cnt;
        }
    }

    if(nn!=1)
    {
        if(1>p.second)
        {
            p.first = nn;
            p.second = 1;
        }
    }

    cout<<p.second<<endl;

    for(ll i=1; i<p.second; i++)
    {
        cout<<p.first<<SS;
        mul *= p.first;
    }

    cout<<n/mul<<endl;
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
