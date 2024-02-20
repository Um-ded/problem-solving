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

#define sz                100000001
#define Set(n, pos)       n |= (1<<(pos))
#define Check(n, pos)     (n&(1<<(pos)))

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

int arr[(sz>>5)+2];
vi primes;

void bitwise_sieve()
{
    primes.pb(2);

    for(int i=3; (i*i)<sz; i+=2)
        if(!Check(arr[i>>5], i&31))
            for(int j=(i*i); j<sz; j+=(i<<1))
                Set(arr[j>>5], j&31);

    for(int i=3; i<sz; i+=2)
        if(!Check(arr[i>>5], i&31))
            primes.pb(i);
}

void solve()
{
    bitwise_sieve();
    int n;

    while(cin>>n && n!=0)
    {
        int a = upper_bound(primes.begin(), primes.end(), n)-primes.begin();
        dbl b = n/log(n);
        dbl c = fabs(a-b);
        dbl ans = c*100/a;
        cout<<fixed<<setprecision(1)<<ans<<endl;
    }
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
