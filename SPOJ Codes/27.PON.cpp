///Approach 1 - Probabilistic Fermat primality test

#include <bits/stdc++.h>

using namespace std;

#define endl                "\n"
#define noice               ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long           ll;
typedef unsigned long long  ull;

ull mod_mul(ull a, ull b, ull mod)
{
    ull res = 0;
    a %= mod;

    while(b)
    {
        if(b&1)
            res = (res+a)%mod;

        a = (a*2ULL)%mod;
        b >>= 1;
    }

    return res;
}

ull bigmod(ull a, ull b, ull mod)
{
    ull res = 1;
    a %= mod;

    while(b)
    {
        if(b&1)
            res = mod_mul(res, a, mod);

        a = mod_mul(a, a, mod);
        b >>= 1;
    }

    return res;
}

bool fermat_primality_test(ull n, int runs)
{
    if(n<=4)
        return n==2 || n==3;

    for(int i=0; i<runs; i++)
    {
        ull a = 2+(rand()%(n-3));

        if(bigmod(a, n-1, n)!=1)
            return false;
    }

    return true;
}

int main()
{
    noice

    int t=1;
    cin>>t;

    while(t--)
    {
        ull n;
        cin>>n;

        if(fermat_primality_test(n, 5))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}



///Approach 2 - Deterministic Miller-Rabin primality test

#include <bits/stdc++.h>

using namespace std;

#define endl                "\n"
#define noice               ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long           ll;
typedef unsigned long long  ull;

ull mod_mul(ull a, ull b, ull mod)
{
    ull res = 0;
    a %= mod;

    while(b)
    {
        if(b&1)
            res = (res+a)%mod;

        a = (a*2ULL)%mod;
        b >>= 1;
    }

    return res;
}

ull bigmod(ull a, ull b, ull mod)
{
    ull res = 1;
    a %= mod;

    while(b)
    {
        if(b&1)
            res = mod_mul(res, a, mod);

        a = mod_mul(a, a, mod);
        b >>= 1;
    }

    return res;
}

bool check_composite(ull n, ull a, ull d, int s)
{
    ull x = bigmod(a, d, n);

    if(x==1 || x==n-1)
        return false;

    for(int i=1; i<s; i++)
    {
        x = mod_mul(x, x, n);

        if(x==n-1)
            return false;
    }

    return true;
}

bool miller_rabin_primality_test(ull n)
{
    if(n<2)
        return false;

    int powers_of_two = 0;
    ull d = n-1;

    while(!(d&1))
    {
        d >>= 1;
        powers_of_two++;
    }

    for(auto a:{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37})
    {
        if(n==a)
        return true;

        if(check_composite(n, a, d, powers_of_two))
            return false;
    }

    return true;
}

int main()
{
    noice

    int t=1;
    cin>>t;

    while(t--)
    {
        ull n;
        cin>>n;

        if(miller_rabin_primality_test(n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
