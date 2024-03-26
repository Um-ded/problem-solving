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
//#define mod          ((long long)1000000007)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

const int mod = (1<<30);
const int sz = (1e6)+5;
bool check[sz];
vector<int> primes;

void sieve()
{
    primes.push_back(2);

    for(int i=3; (i*i)<sz; i+=2)
        if(!check[i])
            for(int j=(i*i); j<sz; j+=(i+i))
                check[j] = true;

    for(int i=3; i<sz; i+=2)
        if(!check[i])
            primes.push_back(i);
}

int NoD(int num)
{
    int ret = 1;

    for(int i=0; i<primes.size() && primes[i]*primes[i]<=num; i++)
    {
        int cnt = 0;

        while(num%primes[i] == 0)
        {
            cnt++;
            num /= primes[i];
        }

        ret *= cnt+1;
    }

    if(num>1)
        ret *= 2;

    return ret;
}

void solve()
{
    int a, b, c, ans = 0;
    cin>>a>>b>>c;

    for(int i=1; i<=a; i++)
        for(int j=1; j<=b; j++)
            for(int k=1; k<=c; k++)
                ans = (ans+NoD(i*j*k))%mod;

    cout<<ans<<endl;
}

int main()
{
    noice

    sieve();
    int t=1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}
