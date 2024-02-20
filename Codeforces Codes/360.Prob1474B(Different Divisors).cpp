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
#define EPS          1e-9
#define gcd          __gcd
#define FT           first
#define SD           second
#define sz           1000006
#define pb           push_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          (long long)998244353
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

bool a[sz];

void sieve()
{
    a[0] = a[1] = 1;

    for(int i=4; i<sz; i+=2)
        a[i] = 1;

    for(int i=3; (i*i)<sz; i+=2)
        if(!a[i])
            for(int j=(i*i); j<sz; j+=(i+i))
                a[j] = 1;
}

void solve()
{
    ll d, ans, pans1, pans2, prime1=-1, prime2=-1;
    cin>>d;

    for(ll i=d+1; i<sz; i++)
    {
        if(!a[i])
        {
            prime1 = i;
            break;
        }
    }

    for(ll i=d+prime1; i<sz; i++)
    {
        if(!a[i])
        {
            prime2 = i;
            break;
        }
    }

    pans1 = prime1*prime2;
    pans2 = prime1*prime1*prime1;
    ans = min(pans1, pans2);
    cout<<ans<<endl;
}

int main()
{
    noice

    sieve();

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
