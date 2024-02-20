#include<bits/stdc++.h>

using namespace std;

#define endl    "\n"
#define noice   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long   ll;

const int SZ = 1e8;
bool check[SZ+5];
vector<ll> primes = {2};

void sieve()
{
    for(int i=3; (i*i)<SZ; i+=2)
        if(check[i])
            for(int j=(i*i); j<SZ; j+=(i+i))
                check[j] = false;

    for(int i=3; i<SZ; i+=2)
        if(check[i])
            primes.push_back(i);
}

void solve()
{
    ll n, sod = 1LL;
    cin>>n;
    ll x = n;

    for(int i=0; (primes[i]*primes[i])<=x; i++)
    {
        ll power = primes[i];

        while(x%primes[i]==0)
        {
            x /= primes[i];
            power *= primes[i];
        }

        sod *= ((power-1)/(primes[i]-1));
    }

    if(x!=1)
        sod *= (x+1);

    cout<<sod-n<<endl;
}

int main ()
{
    noice

    memset(check, true, sizeof(check));
    sieve();
    int t = 1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
